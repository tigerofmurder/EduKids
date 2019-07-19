#include "specialRewardAnalisys.h"

namespace AnalizeModule
{
	specialRewardAnalizer::specialRewardAnalizer()
	{

	}
    void specialRewardAnalizer::setGoodAnswers(int good){
            _goodAnswers = good;
    }
    void specialRewardAnalizer::setBadAnswers(int bad){
            _badAnswers = bad;
    }
    void specialRewardAnalizer::setTarget(int target){
            _target = target;
    }
    int  specialRewardAnalizer::getGoodAnswers(){
            return _goodAnswers;
    }
    int  specialRewardAnalizer::getBadAnswers(){
            return _badAnswers;
    }
    void  specialRewardAnalizer::increaseGoodAnswers(){
            _goodAnswers++;
    }
    bool  specialRewardAnalizer::isTargetReach(){
            if ( _target >= _goodAnswers ) return true;
            else return false;
    }


}
