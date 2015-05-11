//
//  HMessage.h
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef H_HMessage_h
#define H_HMessage_h

typedef struct HMessage_t {
    int msgType;
    int source;
    int dest;

    int len;
    void* data;
}HMessage;

#endif
