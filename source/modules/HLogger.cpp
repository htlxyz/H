//
//  HLogger.cpp
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "../core/Headers.h"
#include "HLogger.h"

#include "../3rd/log4cplus/include/log4cplus/logger.h"

NS_H_BEGIN

using namespace std;

void* HLogger_create() {
    log4cplus::initialize();

    return (void*)1; //avoid nullptr check
}

int HLogger_init(void* instance) {
    return 0;
}

int HLogger_process(void* instance, HMessage * msg) {
    return 0;
}

int HLogger_release(void* instance) {
    log4cplus::Logger::shutdown();

    return 0;
}

NS_H_END
