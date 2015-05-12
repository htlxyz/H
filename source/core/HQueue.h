//
//  HQueue.h
//  H
//
//  Created by htl on 15/5/12.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HQueue__
#define __H__HQueue__

#include "Headers.h"
#include "HModBase.h"

NS_H_BEGIN

class HQueue : public HModBase {
    
public:
    static HQueue* create();
    virtual int start();
    virtual int stop();
    virtual int process(HMessage *msg);
    
    int pushMsg(HMessage *msg);
    HMessage* popMsg(int timeout);

private:
    HQueue();
    
    int _bsSocket;
};

NS_H_END

#endif /* defined(__H__HQueue__) */
