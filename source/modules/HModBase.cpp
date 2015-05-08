//
//  HModBase.cpp
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HModBase.h"


NS_H_BEGIN

int HModBase::init() {
    return 0;
}

int HModBase::process() {
    return 0;
}

NS_H_END

H::HModBase* hmod_create() {
    return nullptr;
}

int hmod_release() {
    return 0;
}
