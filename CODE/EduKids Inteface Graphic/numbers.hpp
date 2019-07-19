#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "DEFINITIONS.hpp"
#include <vector>

namespace GUI
{
	class numbers
	{
        public:
            numbers(Sergio::GameDataRef data);
            void Draw();
            void AddSprite(std::string title,sf::Vector2i pos);
            const std::vector<sf::Sprite> &GetSprites() const;
            void Update();
            void MoveNumbers();
            void RandomisePipeOffset();

        private:
            std::vector<sf::Sprite> _sprites;
            Sergio::GameDataRef _data;
            unsigned int _animationIterator;
            sf::Clock _clock;
            float _rotation;
            bool _stateRotation = true;
            int _numberSpawnYOffset;

	};
}
