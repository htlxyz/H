//
//  HPoolMgr.h
//  H
//
//  Created by htl on 15/5/11.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HPoolMgr__
#define __H__HPoolMgr__

#include "Headers.h"
#include "HReference.h"

NS_H_BEGIN

class HAutoReleasePool {
public:
    int push(HReference* ref);
    bool isExist(HReference* ref);
    int clear();

private:
    std::vector<HReference*> _objects;
    std::string _name;
};

class HPoolMgr {
    
public:
    static HPoolMgr* getInstance();
    
};

NS_H_END

#endif /* defined(__H__HPoolMgr__) */
