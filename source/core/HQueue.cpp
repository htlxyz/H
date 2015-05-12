//
//  HQueue.cpp
//  H
//
//  Created by htl on 15/5/12.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HQueue.h"
#include "beanstalk.h"

NS_H_BEGIN

HQueue::HQueue() {
    
}

HQueue* HQueue::create() {
    HQueue* queue = new HQueue();
    
    return queue;
}

int HQueue::start() {
    _bsSocket = bs_connect(BEANSTALKD_IP, BEANSTALKD_PORT);
    assert(_bsSocket != BS_STATUS_FAIL);

    return 0;
}

int HQueue::stop() {
    return 0;
}

int HQueue::process(HMessage *msg) {
    std::cout << "[HQueue] do not invoke this function" << std::endl;
    return 0;
}

int HQueue::pushMsg(HMessage *msg) {
    int id = bs_put(_bsSocket, msg->priorities, msg->delay, msg->timeToRun, "hello world", 11);

    assert(id > 0);
    return id;
}

HMessage* HQueue::popMsg(int timeout) {
    
}

NS_H_END
