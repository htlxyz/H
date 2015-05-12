//
//  HFileUtils.cpp
//  H
//
//  Created by htl on 15/5/12.
//  Copyright (c) 2015年 htl. All rights reserved.
//


#include "HFileUtils.h"
#include <sys/stat.h>

HFileUtils::HFileUtils()
:_rootPath("") {
    
}

HFileUtils::~HFileUtils() {
    
}

HFileUtils* HFileUtils::getInstance() {
    if (nullptr == _instance) {
        _instance = new HFileUtils();
    }
    
    return _instance;
}

int HFileUtils::setRootPath(const std::string& path) {
    _rootPath = path;
    
    return 0;
}

int HFileUtils::addSearchPath(const std::string& path) {
    std::string fullPath = _rootPath + path;
    _paths.push_back(fullPath);
    
    return 0;
}

std::string HFileUtils::getFullPath(const std::string fileName) {
    struct stat sts;

    for (auto iter : _paths) {
        std::string fullPath = iter + fileName;
        
        if (stat(fullPath.c_str(), &sts) != -1) {
            return fullPath;
        }
    }
    
    return nullptr;
}

