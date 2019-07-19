#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "DEFINITIONS.hpp"
#include <vector>

namespace GUI
{
	class Question
	{
        public:
            Question(Sergio::GameDataRef data);
            void Draw();
            void AddSprite(std::string title,sf::Vector2i pos);
            const std::vector<sf::Sprite> &GetSprites() const;
            void Update();
            void SetQuestion(std::string question);
            void cleanSprites();

        private:
            std::vector<sf::Sprite> _sprites;
            std::vector<sf::Sprite> _questionSprites;
            Sergio::GameDataRef _data;
            unsigned int _animationIterator;
            sf::Clock _clock;
	};
}
