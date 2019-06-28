#ifndef OPERATION_H
#define OPERATION_H
#include <bits/stdc++.h>
#include <dirent.h>

using namespace std;

class operation{
    map<int,vector<string>> A;
public:
    operation(){
        srand(time_t(nullptr));
    }
    string FuntionGenerator(int Level,int aditional=10,string abcd="+"){
        Level+=1;
        int a=rand() % (aditional*Level) + Level;
        int b=rand() % (aditional*Level) + Level;
        stringstream ss;
        ss << a <<abcd<<b;
        if(abcd=="+"){A[a+b].push_back(ss.str());}
        else if(abcd=="*"){A[a*b].push_back(ss.str());}
        else if(abcd=="-"){A[a-b].push_back(ss.str());}
        return ss.str();
    }
};

#endif // OPERATION_H
