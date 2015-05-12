//
//  HServer.h
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HServer__
#define __H__HServer__

#include "Headers.h"
#include "HModMgr.h"

NS_H_BEGIN

class HServer : public HModBase {
    
public:
    static HServer* create();
    virtual int start();
    virtual int stop();
    virtual int process(HMessage *msg);
    
    ~HServer();
    
private:
    HServer();
    
    int initModMgr();
    
    HModMgr* _modMgr;
};

NS_H_END

#endif /* defined(__H__HServer__) */
