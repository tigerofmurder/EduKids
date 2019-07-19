#ifndef RECORD_H
#define RECORD_H

#include <bits/stdc++.h>
#include <dirent.h>
using namespace std;

///////////////////
/// \brief The record class
///
class record{
public:
    char user[30];
    char gender[10];
    char password[20];
    char age[3];
public:
    /////////////////
    /// \brief record
    ///
    record(){}
    //////////////////
    /// \brief record
    /// \param user1
    /// \param password1
    /// \param age1
    /// \param gender1
    ///
    record(const char* user1, const char* password1, const char* age1, const char* gender1){
        strcpy(user,user1);
        strcpy(password,password1);
        strcpy(age,age1);
        strcpy(gender,gender1);
    }
};
#endif // RECORD_H
