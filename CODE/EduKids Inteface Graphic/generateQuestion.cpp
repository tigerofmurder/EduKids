#include "generateQuestion.h"

namespace LearnModule
{
            generateQuestions::generateQuestions(){

            }
            std::string generateQuestions::giveQuestion( std::string operation )  {
                    _acu.str(""); _result = 0;
                    _acu.clear();
                    srand(time(0));
                        if (operation== "SUMA"){
                                _Aop = rand() % 100  +1;
                                _acu << _Aop;
                                _acu <<'+';

                                _Bop = rand() % 100  +1;
                                _acu << _Bop;

                                _result = _Aop + _Bop;
                                _answer = _acu.str();
                                std::cout<<"rtesultado:"<<_answer<<std::endl;
                                return _answer;
                            }
                        else if (operation== "RESTA"){
                                _Aop = rand() % 100  +1;
                                _acu << _Aop;
                                _acu <<'-';

                                 _Bop = rand() % 100  +1;
                                _acu << _Bop;

                                _result = _Aop - _Bop;
                                _answer = _acu.str();
                                std::cout<<"rtesultado:"<<_answer<<std::endl;
                                return _answer;
                            }
                       else if (operation== "MULTIPLICACION"){
                                 _Aop = rand() % 14+1;
                                _acu << _Aop;
                                _acu <<'*';

                                 _Bop = rand() % 14;
                                _acu << _Bop;

                                _result = int(_Aop * _Bop);
                                _answer = _acu.str();
                                std::cout<<"rtesultado:"<<_answer<<std::endl;
                                return _answer;
                            }
                       else if (operation== "DIVISION"){
                                 _Aop = rand() % 14+1;
                                _Bop = rand() % 14+1;
                                _result = _Aop * _Bop;

                                _acu << _result;
                                _acu <<'/';
                                _acu << _Bop;

                                _result = int(_result / _Bop);
                                _answer = _acu.str();
                                std::cout<<"rtesultado:"<<_answer<<std::endl;
                                return _answer;
                        }
                }


            std::string generateQuestions::giveOptions() {
                    std::cout<<"resulOPtions:"<<_result<<std::endl;
                    _acu.str("");
                    _acu.clear();
                    _opciones.clear();
                    _opciones ="";
                    srand(time(0));
                    int w = _result;
                    int j = rand()% 4; _pos = j;
                    for(int i=0; i<4; i++){
                        if(i==3 && i != j){
                            _result +=  (rand() % 20)  + 1;
                            _opciones.append(std::to_string(_result));
                            }
                        else if(i==3 && i==j){
                           // _acu<<w;
                           _opciones.append(std::to_string(w));
                            }
                        else if (i!=j){
                            _result -=  (rand() % 20)  + 1;
                          //  _acu<<_result+',';
                          _opciones.append(std::to_string(_result));
                          _opciones.append(",");
                        }
                        else if (i==j){
                           // _acu<< w +',';
                           _opciones.append(std::to_string(w));
                           _opciones.append(",");
                        }
                    }
                    //_opciones = _acu.str();
                    std::cout<<"opciones:"<< _opciones<<std::endl;
                    return  _opciones;
            }
            void generateQuestions::resetSettings(){
                         _acu.str(""); _acu.clear();
                    _opciones = "";
                    _answer  = "";
                     _pos = 5;
                     _Bop = 0;
                     _Aop = 0;
                     _result = 0;

            }

}
