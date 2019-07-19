
#include <sstream>
#include "DEFINITIONS.hpp"
#include "MainMenuState.hpp"


#include <iostream>

namespace Sergio
{
	MainMenuState::MainMenuState(GameDataRef data) : _data(data)
	{
	}

	void MainMenuState::Init()
	{
        AddSprite("press_button",sf::Vector2i(700,70));
        AddSprite("press_button",sf::Vector2i(700,160));
        AddSprite("press_button",sf::Vector2i(700,250));
        AddSprite("press_button",sf::Vector2i(700,340));


        ///Sprites de Entrada //////
        AddSpriteInput("box_input",sf::Vector2i(730,440));

		_background.setTexture(_data->assets.GetTexture("Main Menu Background"));

		_title.setFont(_data->assets.GetFont("Marker_Font"));
        _title.setString("Frequency");
        _title.setCharacterSize(60);
        _title.setFillColor(sf::Color::Blue);
        _title.setOrigin(_title.getGlobalBounds().width / 2, _title.getGlobalBounds().height / 2);
        _title.setPosition((SCREEN_WIDTH / 2),20);

        ///////// Static Text///////////
        AddText("Marker_Font","Palabra",sf::Vector2i(50,100),sf::Color::Red,30);
        AddText("Marker_Font","Freq",sf::Vector2i(250,100),sf::Color::Red,30);
        AddText("Marker_Font","Lineas",sf::Vector2i(450,100),sf::Color::Red,30);

        AddText("Marker_Font","Clean",sf::Vector2i(750,100),sf::Color::Black,20);
        AddText("Marker_Font","Load StopW",sf::Vector2i(750,190),sf::Color::Black,20);
        AddText("Marker_Font","Generar",sf::Vector2i(750,280),sf::Color::Black,20);
        AddText("Marker_Font","Buscar",sf::Vector2i(750,370),sf::Color::Black,20);

        ///////// Dynamic Text///////////
        AddTextDynamic("Marker_Font","",sf::Vector2i(50,150),sf::Color::Red,15);
        AddTextDynamic("Marker_Font","",sf::Vector2i(150,150),sf::Color::Red,15);
        AddTextDynamic("Marker_Font","",sf::Vector2i(250,150),sf::Color::Red,15);
      //  AddTextDynamic("Marker_Font","Edad:",sf::Vector2i(270,250),sf::Color::Red,50);
      //  AddTextDynamic("Marker_Font","Telefono:",sf::Vector2i(270,300),sf::Color::Red,50);
      //  AddTextDynamic("Marker_Font","Direccion:",sf::Vector2i(270,350),sf::Color::Red,50);
        AddTextDynamic("Arial_Font","...",sf::Vector2i(750,440),sf::Color::Black,15);

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
			for (unsigned short int i = 0; i < _sprites.size(); i++)
            {
                std::stringstream sstreamMain;
                if (_data->input.IsSpriteClicked(_sprites.at(i), sf::Mouse::Left, _data->window))
                {
                       switch (i)
                       {
                           case 0:
                                std::cout<<"clean"<<std::endl;break;
                           case 1:
                            std::cout<<"load"<<std::endl; break;
                           case 2:
                                std::cout<<"generate"<<std::endl;
                                _texts_ag.at(0).setString("");


                                break;
                           case 3:
                                std::cout<<"search"<<std::endl;
                                _texts_ag.at(0).setString(sstreamMain.str());


                                _texts_ag.at(2).setString("");
                                _texts_ag.at(1).setString("");
                                _texts_ag.at(3).setString("...");
                                Input1.clear();
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

	}

	void MainMenuState::Draw(float dt)
	{
		_data->window.clear(sf::Color::Red);
        _data->window.draw(_background);

        for (unsigned short int i = 0; i < _sprites.size(); i++)
		{
			_data->window.draw(_sprites.at(i));
		}
        for (unsigned short int i = 0; i < _spritesInput.size(); i++)
		{
			_data->window.draw(_spritesInput.at(i));
		}
        for (unsigned short int i = 0; i < _texts.size(); i++)
		{
			_data->window.draw(_texts.at(i));
		}
        for (unsigned short int i = 0; i < _texts_ag.size(); i++)
		{
			_data->window.draw(_texts_ag.at(i));
		}

        _data->window.draw(_title);
		_data->window.display();
	}
}
