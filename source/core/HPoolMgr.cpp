//
//  HPoolMgr.cpp
//  H
//
//  Created by htl on 15/5/11.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HPoolMgr.h"
#include <algorithm>

NS_H_BEGIN
using namespace std;

int HAutoReleasePool::addObject(HReference* ref) {
    _objects.push_back(ref);
    
    return 0;
}

bool HAutoReleasePool::isExist(HReference* ref) {
    std::vector<HReference*>::iterator res = find(_objects.begin(), _objects.end(), ref);
    if (res == _objects.end()) {
        return false;
    }
    return true;
}

int HAutoReleasePool::clear() {
    for(auto val : _objects) {
        val->release();
    }
    _objects.clear();
    return 0;
}

int HAutoReleasePool::setName(const std::string& name) {
    _name = name;
    
    return 0;
}

const std::string& HAutoReleasePool::getName() {
    return _name;
}

HPoolMgr* HPoolMgr::getInstance() {
    HPoolMgr* inst = HPoolMgr::_instance;
    
    if (nullptr == inst) {
        inst = new HPoolMgr();
        HPoolMgr::_instance = inst;
    }
    
    return inst;
}

HAutoReleasePool* HPoolMgr::getPool(const std::string& name) {
    if (name.empty()) {
        return nullptr;
    }

    vector<HAutoReleasePool*>::iterator result =find_if(
        _pools.begin(), _pools.end(),
        [&name](HAutoReleasePool* val)->bool {
            if (val->getName() == name) {
                return true;
            } else {
                return false;
            }
        });

    if (result == _pools.end()) {
        return nullptr;
    }
    return *result;
}

HAutoReleasePool* HPoolMgr::createPool(const std::string& name) {
    HAutoReleasePool* pool = getPool(name);
    if (nullptr != pool) {
        return pool;
    }
    pool = new HAutoReleasePool();
    pool->setName(name);
    addPool(pool);
    
    return pool;
}

int HPoolMgr::addPool(HAutoReleasePool *pool) {
    vector<HAutoReleasePool*>::iterator result = find(_pools.begin(), _pools.end(), pool);
    if (result != _pools.end()) {
        return 1;
    }
    _pools.push_back(pool);
    
    return 0;
}

int HPoolMgr::releasePool(HAutoReleasePool* pool) {
    vector<HAutoReleasePool*>::iterator result = find(_pools.begin(), _pools.end(), pool);
    if (result == _pools.end()) {
        return 1;
    }
    
    //find
    _pools.erase(result);
    pool->clear();
    delete pool;
    
    return 0;
}

NS_H_END

