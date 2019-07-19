#include "Options.h"

namespace GUI
{
	Options::Options(Sergio::GameDataRef data) : _data(data),_rotation(0),_perfect(true)
	{
        int x = 150; int y = 240;
        AddSprite("square_button",sf::Vector2i(SCREEN_WIDTH/2 -x,SCREEN_HEIGHT/2 +20 ));
        AddSprite("square_button",sf::Vector2i(SCREEN_WIDTH/2 +x,SCREEN_HEIGHT/2 +20));
        AddSprite("square_button",sf::Vector2i(SCREEN_WIDTH/2 -x,SCREEN_HEIGHT/2+y));
        AddSprite("square_button",sf::Vector2i(SCREEN_WIDTH/2 +x,SCREEN_HEIGHT/2+y));

        AddText("Marker_Font","Op1",sf::Vector2i(_spritesOP.at(0).getPosition().x,_spritesOP.at(0).getPosition().y),sf::Color::Green,40);
        AddText("Marker_Font","OP2",sf::Vector2i(_spritesOP.at(1).getPosition().x,_spritesOP.at(1).getPosition().y),sf::Color::Green,40);
        AddText("Marker_Font","OP3",sf::Vector2i(_spritesOP.at(2).getPosition().x,_spritesOP.at(2).getPosition().y),sf::Color::Green,40);
        AddText("Marker_Font","Op4",sf::Vector2i(_spritesOP.at(3).getPosition().x,_spritesOP.at(3).getPosition().y),sf::Color::Green,40);
        setAllErrorTransparent();

	}
    void Options::setSpritePositions(int i,int x,int y){
            _spritesOP.at(i).setPosition(x,y);
            _textOP.at(i).setPosition(x,y);

	}
	void Options::setOptions(std::string options){
       // std::string str = "10,20,30,40";
        std::stringstream ss(options);
        auto it = _textOP.begin();
        while( ss.good() ){
            std::string sub;
            getline(ss, sub, ',' );
            it->setString(sub);
            it++;
            //std::cout<<sub<<std::endl;
        }
	}
	void Options::setAllErrorTransparent(){
	      for (int i=0; i< _errorOP.size(); i++){
            _errorOP.at(i).setColor(sf::Color(255, 255, 255,0));
        }
	}
	void Options::setErrorVisible(int i){
        _errorOP.at(i).setColor(sf::Color(255, 255, 255,255));
	}
	void Options::MoveOptions(){
        for (int i=0; i< _spritesOP.size(); i++){
            _spritesOP.at(i).setRotation(_rotation);
        }
        if (_rotation < 15.0f && _stateRotation){
            _rotation += 0.8;
        }
        else{_stateRotation = false;}
        if (_rotation > -15.0f && !_stateRotation) {
            _rotation-= 0.6;
        }
        else{_stateRotation = true;}
	}
    const std::vector<sf::Sprite> &Options::GetSprites() const
	{
        return _spritesOP;
	}

    void Options::AddSprite(std::string title,sf::Vector2i pos)
	{
        sf::Sprite sprite(_data->assets.GetTexture(title));
        sf::Vector2f origin = sf::Vector2f(sprite.getGlobalBounds().width / 2,sprite.getGlobalBounds().height/2);
        sprite.setOrigin(origin);
		sprite.setPosition(pos.x, pos.y);
		_spritesOP.push_back(sprite);

		sf::Sprite sprite2(_data->assets.GetTexture("error"));
        sf::Vector2f origin2 = sf::Vector2f(sprite2.getGlobalBounds().width / 2,sprite2.getGlobalBounds().height/2);
        sprite2.setOrigin(origin2);
        sprite2.setPosition(pos.x, pos.y);
        _errorOP.push_back(sprite2);
	}
	void Options::AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size){
        sf::Text texto;
        texto.setFont(_data->assets.GetFont(font));
        texto.setString(title);
		texto.setPosition(pos.x, pos.y);
		texto.setColor(color);
        texto.setOrigin(texto.getGlobalBounds().width / 2, texto.getGlobalBounds().height / 2);
		texto.setCharacterSize(Size);
		_textOP.push_back(texto);
	}

	void Options::Draw()
	{
	    for( int i=0 ; i< _spritesOP.size(); i++)
            this->_data->window.draw(_spritesOP.at(i));
        for( int i=0 ; i< _errorOP.size(); i++)
            this->_data->window.draw(_errorOP.at(i));
        for( int i=0 ; i< _textOP.size(); i++)
            this->_data->window.draw(_textOP.at(i));
	}
}
