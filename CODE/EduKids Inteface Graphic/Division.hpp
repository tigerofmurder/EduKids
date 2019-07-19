#pragma once
#include <iostream>
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

namespace Sergio
{
	class Division : public State
	{
	public:
		Division(GameDataRef data);
        void AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);
		void Reset();

	private:
	    GUI::backB*  _backB;
	    GUI::Options* _options;
	    GUI::Question* _question;
        GUI::goodJob* _goodjob;
	    LearnModule::generateQuestions _generator;
		GameDataRef _data;
		sf::Clock _clock;
		sf::Sprite _background;
		sf::Text _title;
		std::vector<sf::Text> _textOptions;
	};
}
