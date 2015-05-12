//
//  HMalloc.h
//  H
//
//  Created by htl on 15/5/12.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HMalloc__
#define __H__HMalloc__

#include <stdlib.h>

void* hmalloc(size_t size);
void* hrealloc(void* ptr, size_t size);
void hfree(void* ptr);

#endif /* defined(__H__HMalloc__) */
