#pragma once
#include <iostream>
#include <vector>
#include "DEFINITIONS.hpp"
#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "MainMenuState.hpp"
#include "backButton.hpp"
#include "RecomEsp.hpp"
#include "sstream"
#include <string>


namespace Sergio
{
	class finishState : public State
	{
	public:
		finishState(Sergio::GameDataRef data,int points,bool s);
        void AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
	    std::stringstream ss;
        GUI::backB* _backbotton;
        GUI::specialReward* _specialReward;
		Sergio::GameDataRef _data;

        int _points;
        bool _switch;
		sf::Clock _clock;
		sf::Sprite _background;
		sf::Text _title;
		sf::Text _results;
        std::vector<sf::Text> _textOptions;
		//sf::Sprite _button;
	};
}
