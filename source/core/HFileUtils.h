//
//  HFileUtils.h
//  H
//
//  Created by htl on 15/5/12.
//  Copyright (c) 2015年 htl. All rights reserved.
//

#ifndef __H__HFileUtils__
#define __H__HFileUtils__

#include "Headers.h"

class HFileUtils {
    
public:
    static HFileUtils* getInstance();
    
    int setRootPath(const std::string& path);
    int addSearchPath(const std::string& path);
    std::string getFullPath(const std::string fileName);
    
    ~HFileUtils();

protected:
    HFileUtils();

private:
    static HFileUtils* _instance;
    
    std::string _rootPath;
    std::vector<std::string> _paths;
};

#endif /* defined(__H__HFileUtils__) */
