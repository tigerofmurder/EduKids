#include "backButton.hpp"

namespace GUI{
    backB::backB(Sergio::GameDataRef data) : _data(data)
	{

	}
    const sf::Sprite &backB::GetSprite() const
	{
        return _bB;
	}

    void backB::setSpriteB(std::string title, float x, float y)
	{
        _bB.setTexture(_data->assets.GetTexture(title));
        sf::Vector2f center = sf::Vector2f(_bB.getGlobalBounds().width / 2,_bB.getGlobalBounds().height/2);
        _bB.setOrigin(center);
		_bB.setPosition(x,y);
	}

	void backB::Draw()
	{
        _data->window.draw(_bB);
	}
}
