#ifndef SYSTEM_H
#define SYSTEM_H

#include <functions.h>
#include <record.h>

using namespace std;

class system32{
    int score;
public:
    system32(){
        score=0;
    }
    bool login(string a,string b){
        if(isDir("USUARIOS//"+a)){
            ifstream VALOR;
            VALOR.open("USUARIOS//"+a+"//"+b+".txt");
            if(VALOR){
                return true;
            }
            return false;
        }
        return false;
    }
    void registre(string a, string b, string c, string d, string e){
        if(isDir("USUARIOS//"+a)==false){
            string aux="mkdir \"USUARIOS\"//"+a;
            system(aux.c_str());
            string aux1="USUARIOS/"+a+"//"+b+".txt";
            ofstream Indice(aux1,ios::binary|ios::app);
            record abc(a,b,c,d,e);
            Indice.write(reinterpret_cast<const char *>(&abc), sizeof(record));
            Indice.close();
            ofstream record("USUARIOS/"+a+"//"+"Score.txt");
            record<<0;
            record.close();
            cout<<"Complete";
        }
    }
};

#endif // SYSTEM_H
