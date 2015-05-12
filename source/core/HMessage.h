//
//  HMessage.h
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef H_HMessage_h
#define H_HMessage_h

NS_H_BEGIN

typedef struct HMessage_t {
    int msgType;
    int source;
    int dest;

    int priorities;
    int delay;
    int timeToRun;

    int len;
    void* data;
}HMessage;

void* HMessage_malloc(int size) {
    jemalloc
}

NS_H_END

#endif
