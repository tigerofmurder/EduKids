#pragma once
#include <sstream>
#include <string>
#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "newState1.h"
#include "GameOverState.hpp"
#include "numbers.hpp"
#include <vector>
#include "menuOptions.hpp"
#include "specialRewardAnalisys.h"


namespace Sergio
{
	class MainMenuState : public State
	{
	public:
		MainMenuState(GameDataRef data);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
	    void AddSprite(std::string title,sf::Vector2i pos);
        void AddSpriteInput(std::string title,sf::Vector2i pos);
	    void AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size);
	    void AddTextDynamic(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size);
		GameDataRef _data;

		sf::Sprite _background;
		AnalizeModule::specialRewardAnalizer _analize;
		GUI::numbers* _num;
		GUI::menuOptions* _menuoptions;
		sf::Sprite _Title;
		sf::Text _title;
        int sw;
        sf::String Input1;
        sf::Clock _clock;
		std::vector<sf::Sprite> _sprites;
		std::vector<sf::Sprite> _spritesInput;
		std::vector<sf::Text> _texts;
		std::vector<sf::Text> _texts_ag;

	};
}
