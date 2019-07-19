#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "DEFINITIONS.hpp"
#include <vector>

namespace GUI
{
	class specialReward
	{
        public:
            specialReward(Sergio::GameDataRef data);
            void Draw();
            void AddSprite(std::string title,sf::Vector2i pos);
            const std::vector<sf::Sprite> &GetSprites() const;
            void Update();
            void AnimateCoins();
            void RandomisePipeOffset();

        private:
            std::vector<sf::Sprite> _sprites;
            sf::Sprite _title;
            Sergio::GameDataRef _data;
            unsigned int _animationIterator;
            sf::Clock _clock;
            float _rotation;
            bool _stateRotation = true;
            int _numberSpawnYOffset;
            float _movementx;
            float _movementy;

	};
}
