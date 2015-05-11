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
#include <stdio.h>

NS_H_BEGIN

class HServer {
    
public:
    int init();
    int run();
    int release();
};

NS_H_END

#endif /* defined(__H__HServer__) */
