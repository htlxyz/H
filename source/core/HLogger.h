//
//  HLogger.h
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HLogger__
#define __H__HLogger__

#include "Headers.h"
#include "HModBase.h"

NS_H_BEGIN

class HLogger : public HModBase {
    
public:
    static HLogger* create();
    virtual int start();
    virtual int stop();
    virtual int process(HMessage* msg);

};

void* HLogger_create(std::string config);
int HLogger_init(void* instance);
int HLogger_process(void* instance, HMessage *msg);
int HLogger_release(void* instance);

NS_H_END

#endif /* defined(__H__HLogger__) */
