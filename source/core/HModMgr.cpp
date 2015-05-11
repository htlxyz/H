//
//  HModMgr.cpp
//  H
//
//  Created by htl on 15/5/11.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HModMgr.h"

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

NS_H_END
