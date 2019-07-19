#pragma once
#include<iostream>
#include <SFML/Graphics.hpp>
#include "Game.hpp"
#include "DEFINITIONS.hpp"
#include <vector>
#include <sstream>


namespace GUI
{
	class menuOptions
	{
        public:
            menuOptions(Sergio::GameDataRef data);
            void Draw();
            void AddSprite(std::string title,sf::Vector2i pos);
            void AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size);
            void setAllErrorTransparent();
            void setErrorVisible(int i);
            const std::vector<sf::Sprite> &GetSprites() const;
            void Update();
            void MoveOptions();
            void setOptions(std::string options);
            void setSpritePositions(int i, int x, int y);


        private:
            sf::Sprite _birdSprite;
            std::vector<sf::Sprite> _spritesOP;
            std::vector<sf::Sprite> _errorOP;
            std::vector<sf::Text>  _textOP;
            Sergio::GameDataRef _data;
            unsigned int _animationIterator;
            sf::Clock _clock;
            float _rotation;
            bool _stateRotation = true;

            sf::Clock _movementClock;
            int _birdState;
	};
}
