
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
    /*    _data->assets.LoadTexture("Main Menu Background", MAIN_BACKGROUND_FILEPATH);
		_data->assets.LoadTexture("prev_button", BUTTON_PREV_FILEPATH);
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
		_data->assets.LoadTexture("save_button", BUTTON_SAVE_FILEPATH);
		_data->assets.LoadTexture("press_button", BUTTON_PRESS_FILEPATH);
		_data->assets.LoadFont("Arial_Font", ARIAL_FILEPATH);
		_data->assets.LoadFont("Marker_Font", MARKER_FILEPATH);   */

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
			// Switch To Main Menu
			//_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
		}
	}

	void SplashState::Draw(float dt)
	{
		_data->window.clear(sf::Color::Red);

		_data->window.draw( _background );

		_data->window.display();
	}
}
