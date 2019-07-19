#pragma once
#include <iostream>
#include <vector>
#include "DEFINITIONS.hpp"
#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "MainMenuState.hpp"
#include "backButton.hpp"

namespace Sergio
{
	class GameOverState :  public State
	{
	public:
		GameOverState(Sergio::GameDataRef data);
        void AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size);
		void Init();
		void HandleInput();
		void Update(float dt);
		void Draw(float dt);

	private:
        GUI::backB* _backbotton;

		Sergio::GameDataRef _data;

		sf::Clock _clock;
		sf::Sprite _background;
		sf::Text _title;
        std::vector<sf::Text> _textOptions;
		//sf::Sprite _button;
	};
}
