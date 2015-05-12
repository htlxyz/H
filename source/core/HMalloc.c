//
//  HMalloc.c
//  H
//
//  Created by htl on 15/5/12.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#include "HMalloc.h"

void* hmalloc(size_t size);
void* hrealloc(void* ptr, size_t size);
void hfree(void* ptr);
