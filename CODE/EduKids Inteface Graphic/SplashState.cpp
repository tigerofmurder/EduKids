
#include <sstream>
#include "SplashState.hpp"
#include "DEFINITIONS.hpp"
#include "MainMenuState.hpp"

#include <iostream>

namespace Sergio
{
	SplashState::SplashState(GameDataRef data) : _data(data)
	{

	}

	void SplashState::Init()
	{
		_data->assets.LoadTexture("Splash State Background", SPLASH_SCENE_BACKGROUND_FILEPATH);
		_data->assets.LoadTexture("Main Menu Background", MAIN_BACKGROUND_FILEPATH);
        _data->assets.LoadTexture("pizarra", PIZARRA_BACKGROUND_FILEPATH);
        _data->assets.LoadTexture("blackboardfull", BLACKBOARDFULL_FILEPATH);
        _data->assets.LoadTexture("square_button", SQUARE_BUTTON_FILEPATH);
        _data->assets.LoadTexture("board1",BOARD1_FILEPATH);
        _data->assets.LoadTexture("error",ERROR_FILEPATH);
        _data->assets.LoadTexture("edukids",EDUKIDS_FILEPATH);
        _data->assets.LoadTexture("recomEspecial",SPECIAL_REWARD_FILEPATH);
        _data->assets.LoadTexture("back",BACK_SPRITE_FILEPATH);
        _data->assets.LoadTexture("muybien",GOODJOB_FILEPATH);
        _data->assets.LoadTexture("coin1",COIN_SPRITE_FILEPATH);
        _data->assets.LoadTexture("life",LIFE_SPRITE_FILEPATH);
        _data->assets.LoadTexture("gameover", GAMEOVER_BACKGROUND_FILEPATH);

        _data->assets.LoadTexture( "1" , ONE_FILEPATH);
        _data->assets.LoadTexture( "2",   TWO_FILEPATH);
        _data->assets.LoadTexture( "3",   THREE_FILEPATH);
        _data->assets.LoadTexture( "4",  FOUR_FILEPATH );
        _data->assets.LoadTexture("5", FIVE_FILEPATH );
        _data->assets.LoadTexture("6", SIX_FILEPATH );
        _data->assets.LoadTexture("8", EIGHT_FILEPATH );
        _data->assets.LoadTexture("9", NINE_FILEPATH );

        _data->assets.LoadTexture( "cero" , NUNBER_CERO_FILEPATH );
         _data->assets.LoadTexture( "one" , NUNBER_ONE_FILEPATH );
       _data->assets.LoadTexture( "two" ,   NUNBER_TWO_FILEPATH );
       _data->assets.LoadTexture( "three" ,   NUNBER_THREE_FILEPATH);
        _data->assets.LoadTexture( "four" ,  NUNBER_FOUR_FILEPATH );
       _data->assets.LoadTexture( "five" ,   NUNBER_FIVE_FILEPATH );
       _data->assets.LoadTexture( "six" ,   NUNBER_SIX_FILEPATH );
       _data->assets.LoadTexture( "seven" ,   NUNBER_SEVEN_FILEPATH);
        _data->assets.LoadTexture( "eight" ,  NUNBER_EIGHT_FILEPATH );
       _data->assets.LoadTexture( "nine" ,   NUNBER_NINE_FILEPATH );
        _data->assets.LoadTexture( "plus" ,  SYMBOL_PLUS_FILEPATH );
        _data->assets.LoadTexture( "minus" ,  SYMBOL_MINUS_FILEPATH );
        _data->assets.LoadTexture( "multi" ,  SYMBOL_MULTI_FILEPATH );
        _data->assets.LoadTexture( "divide" ,   SYMBOL_DIVIDE_FILEPATH);
		/*_data->assets.LoadTexture("prev_button", BUTTON_PREV_FILEPATH);
		_data->assets.LoadTexture("next_button", BUTTON_NEXT_FILEPATH);
        _data->assets.LoadTexture("first_button", BUTTON_FIRST_FILEPATH);
		_data->assets.LoadTexture("last_button", BUTTON_LAST_FILEPATH);
		_data->assets.LoadTexture("box_input", INPUT_BOX_FILEPATH);
		_data->assets.LoadTexture("lupa_button", BUTTON_SEARCH_FILEPATH);
		_data->assets.LoadTexture("clear_button", BUTTON_CLEAR_FILEPATH);
		_data->assets.LoadTexture("trash_button", BUTTON_TRASH_FILEPATH);
		_data->assets.LoadTexture("more_button", BUTTON_MORE_FILEPATH);
		_data->assets.LoadTexture("add_button", ADD_FILEPATH);
		_data->assets.LoadTexture("box", BOX_FILEPATH);
		_data->assets.LoadTexture("home_button", BUTTON_HOME_FILEPATH);
		_data->assets.LoadTexture("save_button", BUTTON_SAVE_FILEPATH);*/
		_data->assets.LoadTexture("press_button", BUTTON_PRESS_FILEPATH);
		_data->assets.LoadFont("Arial_Font", ARIAL_FILEPATH);
		_data->assets.LoadFont("Marker_Font", MARKER_FILEPATH);

		_background.setTexture(_data->assets.GetTexture("Splash State Background"));
	}
	void SplashState::HandleInput()
	{
		sf::Event event;

		while (_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				_data->window.close();
			}
		}
	}

	void SplashState::Update(float dt)
	{
		if (_clock.getElapsedTime().asSeconds() > SPLASH_STATE_SHOW_TIME)
		{
			//std::cout<<"ya pasaron 10 seconds"<<std::endl;
			// Switch To Main Menu
			_data->machine.AddState(  StateRef(new MainMenuState(_data)), true);
		}
	}

	void SplashState::Draw(float dt)
	{
		_data->window.clear(sf::Color::Black);

		_data->window.draw( _background );

		_data->window.display();
	}
}
