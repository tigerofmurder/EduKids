#include "numbers.hpp"

namespace GUI
{
	numbers::numbers(Sergio::GameDataRef data) : _data(data),_rotation(0)
	{
	    float x = 150;
	    float y = 240;
		AddSprite("1",sf::Vector2i(SCREEN_WIDTH/2 -x,SCREEN_HEIGHT/2 +20 ));
        AddSprite("2",sf::Vector2i(SCREEN_WIDTH/2 +x,SCREEN_HEIGHT/2 +20));
        AddSprite("3",sf::Vector2i(SCREEN_WIDTH/2 -x,SCREEN_HEIGHT/2+y));
        AddSprite("4",sf::Vector2i(SCREEN_WIDTH/2 +x,SCREEN_HEIGHT/2+y));
        AddSprite("5",sf::Vector2i(SCREEN_WIDTH/2 -x,SCREEN_HEIGHT/2 +20 ));
        AddSprite("6",sf::Vector2i(SCREEN_WIDTH/2 +x,SCREEN_HEIGHT/2 +20));
        AddSprite("8",sf::Vector2i(SCREEN_WIDTH/2 -x,SCREEN_HEIGHT/2+y));
        AddSprite("9",sf::Vector2i(SCREEN_WIDTH/2 +x,SCREEN_HEIGHT/2+y));
	}

	void numbers::MoveNumbers(){
		for (unsigned short int i = 0; i < _sprites.size(); i++)
		{   // if deletes pipes
			if (_sprites.at(i).getPosition().y > SCREEN_HEIGHT + _sprites.at(i).getGlobalBounds().height/2)
			{
			    RandomisePipeOffset();
                _sprites.at(i).setPosition(_numberSpawnYOffset,-_numberSpawnYOffset*0.2);
			}
			else
			{
				float movement = NUMBER_MOVEMENT_SPEED;
				_sprites.at(i).move(0,movement);
				_sprites.at(i).rotate(2);
			}
		}
	}

    const std::vector<sf::Sprite> &numbers::GetSprites() const
	{
        return _sprites;
	}

    void numbers::AddSprite(std::string title,sf::Vector2i pos)
	{
        sf::Sprite sprite(_data->assets.GetTexture(title));
        sf::Vector2f origin = sf::Vector2f(sprite.getGlobalBounds().width / 2,sprite.getGlobalBounds().height/2);
        sprite.setOrigin(origin);
		sprite.setPosition(pos.x, pos.y);
		_sprites.push_back(sprite);
	}

	void numbers::Draw()
	{
	    for( int i=0 ; i< _sprites.size(); i++)
            this->_data->window.draw(_sprites.at(i));

	}
    void numbers::RandomisePipeOffset()
	{
		_numberSpawnYOffset = rand() % (SCREEN_WIDTH  + 1);
	}


}
