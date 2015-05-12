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
    int addObject(HReference* ref);
    bool isExist(HReference* ref);
    int clear();
    int setName(const std::string& name);
    const std::string& getName();

private:
    std::vector<HReference*> _objects;
    std::string _name;
};

class HPoolMgr {
    
public:
    static HPoolMgr* getInstance();
    HAutoReleasePool* getPool(const std::string& name);
    HAutoReleasePool* createPool(const std::string& name);
    int releasePool(HAutoReleasePool* pool);
    
private:
    static HPoolMgr* _instance;
    
    std::vector<HAutoReleasePool*> _pools;
    
    int addPool(HAutoReleasePool* pool);
    
};

NS_H_END

#endif /* defined(__H__HPoolMgr__) */
