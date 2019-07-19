#pragma once
#include <iostream>
#include "DEFINITIONS.hpp"

namespace AnalizeModule
{
	class specialRewardAnalizer
	{
        public:
            specialRewardAnalizer();
            void setGoodAnswers(int good);
            void setBadAnswers(int bad);
            void setTarget(int t);
            void increaseGoodAnswers();
            int  getGoodAnswers();
            int  getBadAnswers();
            bool isTargetReach();

        private:
            int _target;
            int _goodAnswers;
            int _badAnswers;

	};
}
