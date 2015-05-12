//
//  HModMgr.h
//  H
//
//  Created by htl on 15/5/11.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HModMgr__
#define __H__HModMgr__

#include "Headers.h"
#include "HModBase.h"

NS_H_BEGIN

class HModMgr : public HModBase {
    
public:
    static HModMgr* create();
    virtual int init();
    virtual int process();

    int setRootPath(const std::string& path);
    int addSearchPath(const std::string path);
    HModBase* loadMod(const std::string& name);
    HModBase* getMod(const std::string& name);
    int releaseMod(const std::string& name);
    int releaseMod(HModBase* pMod);

private:
    HModMgr();
    
    HModBase* findMod(const std::string& name);
    bool modExist(const HModBase* pMod);
    
    std::vector<HModBase*> _mods;
};

NS_H_END

#endif /* defined(__H__HModMgr__) */
