//
//  Macros.h
//  H
//
//  Created by htl on 15/5/8.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef H_Macros_h
#define H_Macros_h


//namespace
#ifdef __cplusplus
#define NS_H_BEGIN                     namespace H {
#define NS_H_END                       }
#define USING_NS_H                     using namespace H
#define NS_H                           ::H
#else
#define NS_H_BEGIN
#define NS_H_END
#define USING_NS_H
#define NS_H
#endif


//types
//32bit
//typedef char                HBOOL;
//typedef signed short int    HINT16;
//typedef unsigned short int  HUINT16;
//typedef signed int          HINT32;
//typedef unsigned int        HUINT32;
//typedef signed long long    HINT64;
//typedef unsigned long long  HUINT64;
//64bit
//typedef char                HBOOL;
//typedef signed short int    HINT16;
//typedef unsigned short int  HUINT16;
//typedef signed int          HINT32;
//typedef unsigned int        HUINT32;
//typedef signed long         HINT64;
//typedef unsigned long       HUINT64;


#endif
