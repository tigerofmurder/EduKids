#include "Division.hpp"

namespace Sergio
{
	Division::Division(GameDataRef data) : _data(data)
	{
        std::cout<<"contructor_newatate1"<<std::endl;
        _options = new GUI::Options(this->_data);
        _question = new GUI::Question(this->_data);
        _backB = new GUI::backB(this->_data);

        _question->SetQuestion("550/10");
        _options->setOptions("0,0,0,0");
        _backB->setSpriteB("back",SCREEN_WIDTH/15,50);

	}

    void Division::AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size)
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
	void Division::Init()
	{
       _background.setTexture(_data->assets.GetTexture("pizarra"));

        _title.setFont(_data->assets.GetFont("Marker_Font"));
        _title.setString("Suma");
        _title.setCharacterSize(60);
        _title.setFillColor(sf::Color::Blue);
        _title.setOrigin(_title.getGlobalBounds().width / 2, _title.getGlobalBounds().height / 2);
        _title.setPosition((SCREEN_WIDTH / 2),20);

	}
	void Division::HandleInput()
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
                for (unsigned short int i = 0; i < _options->GetSprites().size(); i++)
                {
                    if ( _data->input.IsSpriteClickedOrigin(_options->GetSprites().at(i), sf::Mouse::Left, _data->window)  )
                    {
                           switch (i)
                           {
                               case 0:
                                    {
                                    std::cout<<"button1"<<std::endl;
                                    break;
                                    }
                               case 1:
                                    std::cout<<"button2"<<std::endl;
                                    break;
                               case 2:
                                    std::cout<<"button3"<<std::endl;
                                    break;
                               case 3:
                                    std::cout<<"button4"<<std::endl;
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
	void Division::Update(float dt)
	{
		/*if ( _clock.getElapsedTime().asSeconds() > BACK_STATE_TIME )
		{
			_data->machine.RemoveState();
			_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
		} */
		_options->MoveOptions();
	}

	void Division::Draw(float dt)
	{
		_data->window.clear(sf::Color::Red);
		_data->window.draw(_background);
		_backB->Draw();
        _options->Draw();
        _question->Draw();
		_data->window.draw(_title);
		_data->window.display();
	}
}
