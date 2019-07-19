#pragma once
#include "DEFINITIONS.hpp"
#include "SFML/Graphics.hpp"
#include "Game.hpp"
#include <vector>
#include <iostream>

namespace GUI {
	class Life
	{
	public:
		Life(Sergio::GameDataRef data, int numLifes, int OFFSET );
		void Draw();
		void UpdateLife();
		void Reset();
		bool Empty();
		bool _enable;
	private:
		Sergio::GameDataRef _data;
		std::vector<sf::Sprite> lifeSprites;
		int _numLifes;
		int _realives;

	};

}
