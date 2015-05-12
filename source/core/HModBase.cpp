//
//  HModBase.cpp
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HModBase.h"

NS_H_BEGIN

int HModBase::start() {
    return 0;
}

int HModBase::stop() {
    return 0;
}

int HModBase::process(HMessage *msg) {
    std::cout << "rewirte this function" << std::endl;
    
    return 0;
}


int HModBase::setName(const std::string& name) {
    _name = name;
    
    return 0;
}

std::string& HModBase::getName() {
    return _name;
}

NS_H_END

H::HModBase* hmod_create() {
    return nullptr;
}

int hmod_release() {
    return 0;
}
