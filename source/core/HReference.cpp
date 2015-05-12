//
//  HReference.cpp
//  H
//
//  Created by htl on 15/5/11.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HReference.h"
#include "HPoolMgr.h"

NS_H_BEGIN

HReference::HReference()
:_referenceCount(1) {
    
}

void HReference::retain() {
    _referenceCount++;
}

unsigned int HReference::release() {
    assert(_referenceCount > 0);
    _referenceCount--;
    if (0 == _referenceCount) {
        delete this;
        return 0;
    }
    return _referenceCount;
}

HReference* HReference::autorelease() {
    HAutoReleasePool* pool = HPoolMgr::getInstance()->getPool(AUTO_RELEASE_POOL_NAME);
    if (nullptr == pool) {
        pool = HPoolMgr::getInstance()->createPool(AUTO_RELEASE_POOL_NAME);
    }
    pool->addObject(this);
    
    return this;
}

unsigned int HReference::getReferenceCount() {
    return _referenceCount;
}

NS_H_END
