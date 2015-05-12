//
//  HModMgr.cpp
//  H
//
//  Created by htl on 15/5/11.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HModMgr.h"

//mods headers
#include "HLogger.h"

NS_H_BEGIN


HModMgr* HModMgr::create() {
    return new HModMgr();
}

int HModMgr::init() {
    return 0;
}

int HModMgr::process() {
    return 0;
}

HModBase* HModMgr::getMod(const std::string& name) {
    return findMod(name);
}

int HModMgr::releaseMod(const std::string& name) {
    HModBase* pMod = nullptr;
    pMod = findMod(name);
    if (nullptr == pMod) {
        return 1;
    }
    
    return releaseMod(pMod);
}

int HModMgr::releaseMod(HModBase* pMod) {
    if (nullptr == pMod) {
        return 1;
    }
    
    auto resutl = find(_mods.begin(), _mods.end(), pMod);
    if (resutl == _mods.end()) {
        return 1;
    }
    _mods.erase(resutl);
    
    pMod->stop();
    pMod->release();
    pMod = nullptr;
    
    return 0;
}

HModBase* HModMgr::loadMod(const std::string& name) {
    HModBase* pMod = nullptr;
    pMod = findMod(name);
    if (nullptr != pMod) {
        return pMod;
    }

    if ("HLogger" == name) {
        pMod = HLogger::create();
    } else {
        std::cout << "[HModMgr] can't load mod:" << name << std::endl;
    }
    
    if (nullptr == pMod) {
        return nullptr;
    }
    _mods.push_back(pMod);
    
    return pMod;
}

HModBase* HModMgr::findMod(const std::string& name) {
    auto result = find_if(_mods.begin(), _mods.end(),
                          [&name](HModBase* val)->bool{
                              if (name == val->getName()) {
                                  return true;
                              } else {
                                  return false;
                              }
                          });
    
    if (result == _mods.end()) {
        return nullptr;
    } else {
        return *result;
    }
}

bool HModMgr::modExist(const HModBase* pMod) {
    auto resutl = find(_mods.begin(), _mods.end(), pMod);
    if (resutl == _mods.end()) {
        return false;
    }
    return true;
}


NS_H_END
