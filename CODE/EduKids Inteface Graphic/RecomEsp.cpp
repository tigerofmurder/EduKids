#include "RecomEsp.hpp"

namespace GUI
{
	specialReward::specialReward(Sergio::GameDataRef data) : _data(data),_rotation(0),_movementx(COIN_MOVEMENT_SPEED),_movementy(-COIN_MOVEMENT_SPEED)
	{
	    float x = 150;
	    float y = 240;
        _title.setTexture(_data->assets.GetTexture("recomEspecial"));
        sf::Vector2f origin = sf::Vector2f(_title.getGlobalBounds().width / 2,_title.getGlobalBounds().height/2);
        _title.setOrigin(origin);
		_title.setPosition(SCREEN_WIDTH/2,SCREEN_HEIGHT/2);

		AddSprite("coin1",sf::Vector2i(-30,SCREEN_HEIGHT/2 -20));
        AddSprite("coin1",sf::Vector2i(-30,SCREEN_HEIGHT/2 -10));
        AddSprite("coin1",sf::Vector2i(-30,SCREEN_HEIGHT - 20));
        AddSprite("coin1",sf::Vector2i(-30,SCREEN_HEIGHT -10));
        AddSprite("coin1",sf::Vector2i(-30,SCREEN_HEIGHT +10 ));
        AddSprite("coin1",sf::Vector2i(-30,SCREEN_HEIGHT +20));
        AddSprite("coin1",sf::Vector2i(-30,SCREEN_HEIGHT+30));
        AddSprite("coin1",sf::Vector2i(-30,SCREEN_HEIGHT+5));
	}

	void specialReward::AnimateCoins(){
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

    const std::vector<sf::Sprite> &specialReward::GetSprites() const
	{
        return _sprites;
	}

    void specialReward::AddSprite(std::string title,sf::Vector2i pos)
	{
        sf::Sprite sprite(_data->assets.GetTexture(title));
        sf::Vector2f origin = sf::Vector2f(sprite.getGlobalBounds().width / 2,sprite.getGlobalBounds().height/2);
        sprite.setOrigin(origin);
		sprite.setPosition(pos.x, pos.y);
		_sprites.push_back(sprite);
	}

	void specialReward::Draw()
	{
        _data->window.draw(_title);
	    for( int i=0 ; i< _sprites.size(); i++)
            this->_data->window.draw(_sprites.at(i));

	}
    void specialReward::RandomisePipeOffset()
	{
		_numberSpawnYOffset = (rand() % (SCREEN_WIDTH )) +10  ;
	}


}
