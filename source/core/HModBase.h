//
//  HModBase.h
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HModBase__
#define __H__HModBase__

#include "Headers.h"

#include <stdio.h>

NS_H_BEGIN

class HModBase {
public:
    static int create();
    virtual int init();
    virtual int process();
    virtual int release();
};

NS_H_END

extern "C" {
    H::HModBase* hmod_create(); //must impl by inheritor self
    int hmod_release();  //must impl by inheritor self
    
//    void* hmod_create();
//    int hmod_init(void* instance);
//    int hmod_process(void* instance);
//    int hmod_release(void* instance);
}

#endif /* defined(__H__HModBase__) */
