#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "DEFINITIONS.hpp"
#include <vector>

namespace GUI
{
	class goodJob
	{
        public:
            goodJob(Sergio::GameDataRef data);
            void Draw();
            const sf::Sprite &GetSprite() const;
            void Update();
            void setchange(float x){_change = x;}

        private:
            sf::Sprite _sprite;

            Sergio::GameDataRef _data;
            sf::Clock _clock;
            float _change;
            bool _state= true;
	};
}
