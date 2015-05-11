//
//  HModMgr.h
//  H
//
//  Created by htl on 15/5/11.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HModMgr__
#define __H__HModMgr__

#include "Headers.h"
#include <stdio.h>
#include <string>

NS_H_BEGIN

class HModMgr : public HModBase {
    
public:
    static HModMgr* create();
    virtual int init();
    virtual int process();
};

NS_H_END

#endif /* defined(__H__HModMgr__) */
