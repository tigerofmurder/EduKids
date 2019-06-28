#ifndef RECORD_H
#define RECORD_H

#include <bits/stdc++.h>
#include <dirent.h>
using namespace std;

class record{
public:
    string id;
    string name;
    string last_name;
    string password;
    string email;
public:
    record(){}
    record(string a, string b, string c, string d, string e){
        id=a;
        name=b;
        last_name=c;
        password=d;
        email=e;
    }
};
#endif // RECORD_H
