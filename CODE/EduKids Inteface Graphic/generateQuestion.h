#pragma once
#include <iostream>
#include "DEFINITIONS.hpp"
#include <sstream>
#include <time.h>
#include <string>

namespace LearnModule
{
	class generateQuestions
	{
        public:
            generateQuestions();
            std::string giveOptions();
            std::string giveQuestion(std::string operation);
            int getRightIndexPosition(){ return _pos;}
            void setPos(int x){_pos = x;}
            void resetSettings();
            void increaseRightanswers(){ _countRightanswers++;}
            void setRightanswers(int x){ _countRightanswers=x;}
            int  getRightanswers(){return _countRightanswers;}
        private:
            std::stringstream _acu;
            std::string _opciones;
            std::string _answer;
            int _pos;
            int _Bop;
            int _Aop;
            int _result;
            int _countRightanswers =0;
	};
}
