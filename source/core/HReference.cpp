//
//  HReference.cpp
//  H
//
//  Created by htl on 15/5/11.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HReference.h"

NS_H_BEGIN

void HReference::retain() {
    _referenceCount++;
}

unsigned int HReference::release() {
    assert(_referenceCount > 0);
    _referenceCount--;
    if (0 == _referenceCount) {
        delete this;
    }
    return _referenceCount;
}

HReference* HReference::autorelease() {
    return this;
}

unsigned int HReference::getReferenceCount() {
    return _referenceCount;
}

NS_H_END
