#include <iostream>
#include "finishState.hpp"

namespace Sergio
{
	finishState::finishState(Sergio::GameDataRef data, int points, bool s) : _data(data), _points(points), _switch(s)
	{
        std::cout<<"finishState"<<std::endl;
        _backbotton = new GUI::backB(this->_data);
        _specialReward = new GUI::specialReward(this->_data);
        _backbotton->setSpriteB("back",SCREEN_WIDTH/15,50);

	}

    void finishState::AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size)
	{
        sf::Text texto;
        texto.setFont(_data->assets.GetFont(font));
        texto.setString(title);
		texto.setPosition(pos.x, pos.y);
		texto.setColor(color);
        //texto.setOrigin(texto.getGlobalBounds().width / 2, texto.getGlobalBounds().height / 2);
		texto.setCharacterSize(Size);
		_textOptions.push_back(texto);
	}
	void finishState::Init()
	{
	    ss<<"Felicidades Ganastes : ";
	    ss<<_points;
       _background.setTexture(_data->assets.GetTexture("pizarra"));

        _title.setFont(_data->assets.GetFont("Marker_Font"));
        _title.setString("Resultados");
        _title.setCharacterSize(60);
        _title.setFillColor(sf::Color::White);
        _title.setOrigin(_title.getGlobalBounds().width / 2, _title.getGlobalBounds().height / 2);
        _title.setPosition((SCREEN_WIDTH / 2),50);


        _results.setFont(_data->assets.GetFont("Arial_Font"));
        _results.setString(ss.str());
        _results.setCharacterSize(45);
        _results.setFillColor(sf::Color::White);
        _results.setOrigin(_title.getGlobalBounds().width / 2, _title.getGlobalBounds().height / 2  );
        if (_switch) _results.setPosition(   SCREEN_WIDTH / 4 , SCREEN_HEIGHT  - SCREEN_HEIGHT/4);
        else _results.setPosition((SCREEN_WIDTH / 4), SCREEN_HEIGHT/2);

	}
	void finishState::HandleInput()
	{
		sf::Event event;

		while (_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				_data->window.close();
			}
			if (_clock.getElapsedTime().asSeconds() > 0.15)
            {

                if(_data->input.IsSpriteClickedOrigin(_backbotton->GetSprite(),sf::Mouse::Left, _data->window)){
                        _data->machine.RemoveState();
                        _data->machine.AddState(StateRef(new MainMenuState(_data)), true);
                        std::cout<<"back"<<std::endl;

                }
            }
        }
	}
	void finishState::Update(float dt)
	{
		/*if ( _clock.getElapsedTime().asSeconds() > BACK_STATE_TIME )
		{
			_data->machine.RemoveState();
			_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
		} */
		_specialReward->AnimateCoins();
	}

	void finishState::Draw(float dt)
	{
		_data->window.clear(sf::Color::Red);
		_data->window.draw(_background);
        if (_switch) _specialReward->Draw();
		_backbotton->Draw();
		_data->window.draw(_results);
		_data->window.draw(_title);
		_data->window.display();
	}
}
