//
//  main.cpp
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "modules/HServer.h"
#include <iostream>

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
    
    delete server;
    std::cout << "HServer down bye!\n";
    return 0;
}
