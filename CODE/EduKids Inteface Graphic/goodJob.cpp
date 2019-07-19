#include "goodJob.h"

namespace GUI
{
	goodJob::goodJob(Sergio::GameDataRef data) : _data(data),_change(0)
	{
        _sprite.setTexture(_data->assets.GetTexture("muybien"));
        sf::Vector2f origin = sf::Vector2f(_sprite.getGlobalBounds().width / 2,_sprite.getGlobalBounds().height/2);
        _sprite.setOrigin(origin);
		_sprite.setPosition( SCREEN_WIDTH/2, SCREEN_HEIGHT/2+50 );
		_sprite.setColor(sf::Color(255, 255, 255,_change));
	}
    const sf::Sprite &goodJob::GetSprite() const
	{
        return _sprite;
	}

	void goodJob::Draw()
	{
        Update();
        _data->window.draw(_sprite);
	}
    void goodJob::Update()
	{
        if (_change >1 ) _change -= 2 ;
        _sprite.setColor(sf::Color(255, 255, 255, _change));
	}
}
