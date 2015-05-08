//
//  HMessage.h
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef H_HMessage_h
#define H_HMessage_h

typedef enum HMessageType_t {
    HMessageType_NUMBER = 1;
    HMessageType_STRING = 2;
    HMessageType_BIN    = 3;
}HMessageType;

typedef struct HMessage_t {
    HMessageType msgType;
    int source;
    int dest;

    int len;
    void* data;
}HMessage;

#endif
