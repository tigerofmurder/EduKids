#include "GameOverState.hpp"
namespace Sergio
{
	GameOverState::GameOverState(Sergio::GameDataRef data) : _data(data)
	{
        std::cout<<"GameOverState"<<std::endl;
        _backbotton = new GUI::backB(this->_data);

        _backbotton->setSpriteB("back",SCREEN_WIDTH/15,50);

	}

    void GameOverState::AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size)
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
	void GameOverState::Init()
	{
       _background.setTexture(_data->assets.GetTexture("gameover"));

        _title.setFont(_data->assets.GetFont("Marker_Font"));
        _title.setString("GameOver!!!");
        _title.setCharacterSize(60);
        _title.setFillColor(sf::Color::Blue);
        _title.setOrigin(_title.getGlobalBounds().width / 2, _title.getGlobalBounds().height / 2);
        _title.setPosition((SCREEN_WIDTH / 2),SCREEN_HEIGHT/ 2 );

	}
	void GameOverState::HandleInput()
	{
		sf::Event event;

		while (_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				_data->window.close();
			}
			if (_clock.getElapsedTime().asSeconds() > 0.10)
            {

                if(_data->input.IsSpriteClickedOrigin(_backbotton->GetSprite(),sf::Mouse::Left, _data->window)){
                        _data->machine.RemoveState();
                        _data->machine.AddState(StateRef(new MainMenuState(_data)), true);
                        std::cout<<"back"<<std::endl;

                }
                _clock.restart();
            }
        }
	}
	void GameOverState::Update(float dt)
	{
		/*if ( _clock.getElapsedTime().asSeconds() > BACK_STATE_TIME )
		{
			_data->machine.RemoveState();
			_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
		} */
	}

	void GameOverState::Draw(float dt)
	{
		_data->window.clear(sf::Color::Red);
		_data->window.draw(_background);
		_backbotton->Draw();
		_data->window.draw(_title);
		_data->window.display();
	}
}
