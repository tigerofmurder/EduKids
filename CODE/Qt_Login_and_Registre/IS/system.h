#ifndef SYSTEM_H
#define SYSTEM_H

#include <record.h>

using namespace std;

//////////////////////
/// \brief The system32 class
///
class system32{
    int score;
public:
    system32(){
        score=0;
    }
    ////////////////////
    /// \brief login
    /// \param a
    /// \param b
    /// \return true or false in case user existing
    ///
    bool login(string a,string b){
        if(is_Directory("USUARIOS//"+a)){
            ifstream VALOR;
            VALOR.open("USUARIOS//"+a+"//"+b+".txt");
            if(VALOR){
                return true;
            }
            return false;
        }
        return false;
    }
    /////////////////
    /// \brief registre
    /// \param a
    /// \param b
    /// \param c
    /// \param d
    /// \param e
    /// \return true or false in case user registre complete
    ///
    bool registre(string a, string b, string c, string d){
        if(is_Directory("USUARIOS//"+a)==false){
            string aux="mkdir \"USUARIOS\"//"+a;
            system(aux.c_str());
            string aux1="USUARIOS/"+a+"//"+b+".txt";
            ofstream Indice(aux1,ios::binary|ios::app);
            record abc(a.c_str(),b.c_str(),c.c_str(),d.c_str());
            Indice.write(reinterpret_cast<const char *>(&abc), sizeof(record));
            Indice.close();

            ofstream record("USUARIOS/"+a+"//"+"Score.txt");
            record<<0;
            record.close();
            return true;
        }
        return false;
    }

    //////////////////////
    /// \brief is_Directory
    /// \param direction
    /// \return
    ///

    bool is_Directory(string direction){
        DIR * directorio=opendir(direction.c_str());
        if(directorio){
            closedir(directorio);
            return true;
        }
        return false;
    }
};

#endif // SYSTEM_H
