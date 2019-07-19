#include "Life.h"

namespace GUI {

	Life::Life(Sergio::GameDataRef data, int numLifes,int OFFSET) :_data(data), _numLifes(numLifes) {
        _realives  = _numLifes;
		int offset = 0;
		for (int i = 0; i < numLifes; i++) {

			sf::Sprite sprite(this->_data->assets.GetTexture("life"));
			sprite.setPosition(SCREEN_WIDTH-this->_data->window.getSize().x/5 + offset +OFFSET , this->_data->window.getSize().y/10);
			lifeSprites.push_back(sprite);
			offset += sprite.getLocalBounds().width + 10;
		}
		_enable = true;
	}
	void Life::Reset(){
        _realives  = _numLifes;
	}
	void Life::Draw() {
		for (unsigned short int i = 0; i < _realives; i++)
		{
			this->_data->window.draw(lifeSprites.at(i));
		}
	}
	void Life::UpdateLife() {
		if (_realives >= 0) {
            _realives--;
		}
	}
	bool Life::Empty() {
		if (_realives < 1) { return true; }
		return false;
	}


}

