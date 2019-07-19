#pragma once
#include <iostream>
#include <vector>
#include "DEFINITIONS.hpp"
#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "MainMenuState.hpp"
#include "Options.h"
#include "Question.hpp"
#include "backButton.hpp"
#include "generateQuestion.h"
#include "goodJob.h"
#include "RecomEsp.hpp"
#include "Life.h"
#include "finishState.hpp"
#include "specialRewardAnalisys.h"


namespace Sergio
{
	class newState1 : public State
	{
	public:
		newState1(GameDataRef data,std::string mode);
        void AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);
		void Reset();

	private:
	    GUI::Options* _bottons;
	    GUI::Question* _question;
	    GUI::backB* _backB;
	    GUI::goodJob* _goodjob;
	    GUI::specialReward* _specialR;
	    GUI::Life* _life;
	    LearnModule::generateQuestions _generator;
		GameDataRef _data;
		sf::Clock _clock;
		sf::Clock _clock2;
		sf::Sprite _background;
		sf::Text _title;
        std::vector<sf::Text> _textOptions;
        std::string _mode;
        int countResets = 0 ;
		//sf::Sprite _button;
	};
}
