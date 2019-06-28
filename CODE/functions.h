#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <bits/stdc++.h>
#include <dirent.h>

using namespace std;

bool isDir(string dir){
    DIR * directorio=opendir(dir.c_str());
    if(directorio){
        closedir(directorio);
        return true;
    }
    return false;
}


#endif // FUNCTIONS_H
