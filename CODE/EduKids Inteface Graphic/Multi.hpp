#pragma once
#include "DEFINITIONS.hpp"
#include <SFML/Graphics.hpp>
#include "State.hpp"
#include "Game.hpp"
#include "MainMenuState.hpp"
#include "Options.h"
#include "Question.hpp"
#include "backButton.hpp"


namespace Sergio
{
	class Multiplicacion : public State
	{
        public:
            Multiplicacion(GameDataRef data);
            void Init();
            void HandleInput();
            void Update(float dt);
            void Draw(float dt);

        private:
            GUI::Options* _bottons;
            GUI::Question* _question;
            GUI::backB* _backB;
            sf::Text _title;
            GameDataRef _data;
            sf::Clock _clock;
            sf::Sprite _background;
	};
}
