#include "DEFINITIONS.hpp"
#include "MainMenuState.hpp"
#include <iostream>

namespace Sergio
{
	MainMenuState::MainMenuState(GameDataRef data) : _data(data)
	{
	    _num = new GUI::numbers(_data);
	    _menuoptions = new GUI::menuOptions(_data);
	    _analize.setTarget(4);
	}
	void MainMenuState::Init()
	{
	    _Title.setTexture(_data->assets.GetTexture("edukids"));
	    _Title.setOrigin(_Title.getGlobalBounds().width / 2, _Title.getGlobalBounds().height/2);
	    _Title.setPosition(SCREEN_WIDTH/2, 200);



		_background.setTexture(_data->assets.GetTexture("Main Menu Background"));

	}
	void MainMenuState::AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size)
	{
        sf::Text texto;
        texto.setFont(_data->assets.GetFont(font));
        texto.setString(title);
		texto.setPosition(pos.x, pos.y);
		texto.setColor(color);
		//texto.setOrigin(texto.getGlobalBounds().width / 2, texto.getGlobalBounds().height / 2);
		texto.setCharacterSize(Size);
		_texts.push_back(texto);

	}
    void MainMenuState::AddTextDynamic(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size)
	{
        sf::Text texto;
        texto.setFont(_data->assets.GetFont(font));
        texto.setString(title);
		texto.setPosition(pos.x, pos.y);
		texto.setColor(color);
        //texto.setOrigin(texto.getGlobalBounds().width / 2, texto.getGlobalBounds().height / 2);
		texto.setCharacterSize(Size);
		_texts_ag.push_back(texto);
	}

    void MainMenuState::AddSprite(std::string title,sf::Vector2i pos)
	{
        sf::Sprite sprite(_data->assets.GetTexture(title));

		sprite.setPosition(pos.x, pos.y);

		_sprites.push_back(sprite);
	}
    void MainMenuState::AddSpriteInput(std::string title,sf::Vector2i pos)
	{
        sf::Sprite sprite(_data->assets.GetTexture(title));

		sprite.setPosition(pos.x, pos.y);

		_spritesInput.push_back(sprite);
	}


	void MainMenuState::HandleInput()
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
			for (unsigned short int i = 0; i < _menuoptions->GetSprites().size(); i++)
            {
                std::stringstream sstreamMain;
                if ( _data->input.IsSpriteClickedOrigin(_menuoptions->GetSprites().at(i), sf::Mouse::Left, _data->window)  )
                {
                       switch (i)
                       {
                           case 0:
                                {
                                std::cout<<"button1"<<std::endl;
                                _data->machine.AddState(StateRef(new newState1(_data,"SUMA")), true);
                                break;
                                }
                           case 1:
                                std::cout<<"button2"<<std::endl;
                                _data->machine.AddState(StateRef(new newState1(_data,"RESTA")), true);
                               //_data->machine.AddState(StateRef(new Multiplicacion(_data)), true);
                                break;
                           case 2:
                                std::cout<<"button3"<<std::endl;
                                _data->machine.AddState(StateRef(new newState1(_data,"MULTIPLICACION")), true);
                                //_data->machine.AddState(StateRef(new Division(_data)), true);
                                break;
                           case 3:
                                std::cout<<"button4"<<std::endl;
                                _data->machine.AddState(StateRef(new newState1(_data,"DIVISION")), true);
                                //_data->machine.AddState(StateRef(new newState(_data)), true);
                                /* _texts_ag.at(0).setString(sstreamMain.str());
                                 _texts_ag.at(2).setString("");
                                 _texts_ag.at(1).setString("");
                                 _texts_ag.at(3).setString("...");
                                 Input1.clear(); */
                             break;
                           case 4:
                            std::cout<<"cinco"<<std::endl; break;
                           break;

                       }
                }
            }
            for (unsigned short int i = 0; i < _spritesInput.size(); i++)
            {
                    if (_data->input.IsSpriteClicked(_spritesInput.at(i), sf::Mouse::Left, _data->window))
                {
                       switch (i)
                       {
                        case 0:
                            std::cout<<"intrada"<<std::endl; sw = 1;break;
                        case 1:
                            std::cout<<"intrada"<<std::endl; sw = 2;break;
                            break;
                        default:break;
                       }

                }
            }
        _clock.restart();
        }
        if (event.type == sf::Event::TextEntered)
            {
                if( sw==1 && Input1.getSize()<15)
                {Input1 +=event.text.unicode;
                 _texts_ag.at(3).setString(Input1);
                }
            }
		}
	}

	void MainMenuState::Update(float dt)
	{
        _num->MoveNumbers();
        _menuoptions->MoveOptions();
	}

	void MainMenuState::Draw(float dt)
	{
		_data->window.clear(sf::Color::Red);
        _data->window.draw(_background);
        _num->Draw();
        _data->window.draw(_Title);
        _menuoptions->Draw();
		_data->window.display();
	}
}
