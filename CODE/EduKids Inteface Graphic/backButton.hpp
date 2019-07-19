#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "DEFINITIONS.hpp"
#include <vector>

namespace GUI
{
	class backB
	{
        public:
            backB(Sergio::GameDataRef data);
            void Draw();
            void setSpriteB(std::string title,float x ,float y );
            const sf::Sprite &GetSprite() const;
            void Update();

        private:
            std::vector<sf::Sprite> _sprites;
            Sergio::GameDataRef _data;
            sf::Sprite _bB;
            sf::Clock _clock;
	};
}
