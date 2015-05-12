//
//  HReference.h
//  H
//
//  Created by htl on 15/5/11.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HReference__
#define __H__HReference__

#include "Headers.h"

NS_H_BEGIN

class HReference {
private:
    unsigned int _referenceCount;

public:
    HReference();
    void retain();
    unsigned int release();
    HReference* autorelease();
    unsigned int getReferenceCount();
};

NS_H_END

#endif /* defined(__H__HReference__) */
