//
//  HLogger.cpp
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "Headers.h"
#include "HLogger.h"

#include "log4cplus/configurator.h"
#include "log4cplus/loggingmacros.h"
#include "log4cplus/logger.h"

NS_H_BEGIN

using namespace std;
using namespace log4cplus;

static Logger root = Logger::getRoot();

void* HLogger_create(string configFile) {
    log4cplus::initialize();
    PropertyConfigurator::doConfigure(configFile);

    return (void*)1; //avoid nullptr check
}

int HLogger_init(void* instance) {
    return 0;
}

int HLogger_process(void* instance, HMessage * msg) {
    LOG4CPLUS_DEBUG(root, LOG4CPLUS_TEXT(((char*)msg->data)));
    return 0;
}

int HLogger_release(void* instance) {
    log4cplus::Logger::shutdown();

    return 0;
}

NS_H_END
