//
//  HServer.cpp
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HServer.h"
#include "HFileUtils.h"

NS_H_BEGIN

HServer::HServer()
:_modMgr(nullptr) {
    
}

HServer::~HServer() {
    delete _modMgr;
}

HServer* HServer::create() {
    HServer* server = new HServer();

    return server;
}

int HServer::start() {
    initModMgr();
    
    return 0;
}

int HServer::stop() {
    return 0;
}

int HServer::process(HMessage *msg) {
    return 0;
}

int HServer::initModMgr() {
    _modMgr = HModMgr::create();
    
    _modMgr->loadMod("HLogger");
    
    return 0;
}

NS_H_END

