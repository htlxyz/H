//
//  main.cpp
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "core/HServer.h"
#include "core/HLogger.h"
#include <iostream>

USING_NS_H;

int main(int argc, const char * argv[]) {
    H::HServer *server = new H::HServer();
    if (nullptr == server) {
        std::cout << "[main]Create HServer Fail!";
        return 1;
    }

    if (0 != server->init()) {
        std::cout << "[main]Init HServer Fail!";
    }
    
    if (0 != server->run()) {
        std::cout << "[main]HServer Run Fail!";
    }
    
    if (0 != server->release()) {
        std::cout << "[main]Release HServer Fail!";
    }
    
    HLogger_create("/Users/htl/Documents/Work/H/source/config/logger_config.properties");
    HLogger_init(nullptr);
    HMessage msg;
    msg.data = (void*)"this is from hmessaage";
    HLogger_process(nullptr, &msg);
    msg.data = (void*)"123";
    HLogger_process(nullptr, &msg);
    HLogger_release(nullptr);
    
    delete server;
    std::cout << "HServer down bye!\n";
    return 0;
}
