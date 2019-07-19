#ifndef OPERATION_H
#define OPERATION_H
#include <bits/stdc++.h>
#include <dirent.h>

using namespace std;
//////////////////////////
/// \brief The operation class
///
class operation{
    map<int,vector<string>> A;
public:
    operation(){
        srand(time_t(nullptr));
    }
    //////////////////
    /// \brief FuntionGenerator
    /// \param Level
    /// \param aditional
    /// \param op
    /// \return string for use in GUI
    ///
    string FuntionGenerator(int Level,int aditional=10,string op="+"){
        Level+=1;
        int a=rand() % (aditional*Level) + Level;
        int b=rand() % (aditional*Level) + Level;
        stringstream ss;
        ss << a <<op<<b;
        if(op=="+"){A[a+b].push_back(ss.str());}
        else if(op=="*"){A[a*b].push_back(ss.str());}
        else if(op=="-"){A[a-b].push_back(ss.str());}
        return ss.str();
    }
};



#endif // OPERATION_H
