#include <iostream>
#include "Multi.hpp"

namespace Sergio
{
	Multiplicacion::Multiplicacion(GameDataRef data) : _data(data)
	{
        std::cout<<"contructor multiplication"<<std::endl;
	}

	void Multiplicacion::Init()
	{
       _bottons = new GUI::Options(this->_data);
       _question = new GUI::Question(this->_data);
       _backB = new GUI::backB(this->_data);


       _question->SetQuestion("10*5");
       _bottons->setOptions("11,466,7,0");
       _backB->setSpriteB("back",SCREEN_WIDTH/15,50);

       _background.setTexture(_data->assets.GetTexture("pizarra"));

        _title.setFont(_data->assets.GetFont("Marker_Font"));
        _title.setString("Multiplicacion");
        _title.setCharacterSize(60);
        _title.setFillColor(sf::Color::Blue);
        _title.setOrigin(_title.getGlobalBounds().width / 2, _title.getGlobalBounds().height / 2);
        _title.setPosition((SCREEN_WIDTH / 2),20);

	}
	void Multiplicacion::HandleInput()
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
                for (unsigned short int i = 0; i < _bottons->GetSprites().size(); i++)
                {
                    if ( _data->input.IsSpriteClickedOrigin(_bottons->GetSprites().at(i), sf::Mouse::Left, _data->window)  )
                    {
                           switch (i)
                           {
                               case 0:
                                    {
                                    std::cout<<"Mbutton1"<<std::endl;
                                    break;
                                    }
                               case 1:
                                    std::cout<<"Mbutton2"<<std::endl;
                                    break;
                               case 2:
                                    std::cout<<"Mbutton3"<<std::endl;
                                    break;
                               case 3:
                                    std::cout<<"Mbutton4"<<std::endl;
                                 break;
                               case 4:
                                std::cout<<"cinco"<<std::endl; break;
                               break;
                           }
                    }
                }
                if(_data->input.IsSpriteClickedOrigin(_backB->GetSprite(),sf::Mouse::Left, _data->window)){
                        _data->machine.RemoveState();
                        _data->machine.AddState(StateRef(new MainMenuState(_data)), true);
                        std::cout<<"back"<<std::endl;

                }
            }

        }
	}
	void Multiplicacion::Update(float dt)
	{
		if ( _clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME )
		{
			_data->machine.RemoveState();
			_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
		}
		_bottons->MoveOptions();
	}

	void Multiplicacion::Draw(float dt)
	{
		_data->window.clear(sf::Color::Red);
		_data->window.draw( _background );
		_data->window.draw(_title);
		_backB->Draw();
		_question->Draw();
		_bottons->Draw();
		_data->window.display();
	}
}
