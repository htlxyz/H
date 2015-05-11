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

int HAutoReleasePool::push(HReference* ref) {
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


NS_H_END

