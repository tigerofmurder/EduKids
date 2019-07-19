#include "newState1.h"

extern int contador_coint;

namespace Sergio
{
	newState1::newState1(GameDataRef data,std::string mode) : _data(data),_mode(mode)
	{
        std::cout<<"contructor_newatate1"<<std::endl;
        _bottons = new GUI::Options(this->_data);
        _question = new GUI::Question(this->_data);
        _backB = new GUI::backB(this->_data);
        _goodjob = new GUI::goodJob(this->_data);
        _life = new GUI::Life(this->_data,3,10);

        _question->SetQuestion(_generator.giveQuestion(_mode));
        _bottons->setOptions(_generator.giveOptions());
        _backB->setSpriteB("back",SCREEN_WIDTH/15,50);
	}

    void newState1::AddText(std::string font,std::string title,sf::Vector2i pos,sf::Color color,short int Size)
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
	void newState1::Init()
	{
       _background.setTexture(_data->assets.GetTexture("pizarra"));

        _title.setFont(_data->assets.GetFont("Marker_Font"));
        _title.setString(_mode);
        _title.setCharacterSize(70);
        _title.setFillColor(sf::Color::White);
        _title.setOrigin(_title.getGlobalBounds().width / 2, _title.getGlobalBounds().height / 2);
        _title.setPosition((SCREEN_WIDTH / 2),50);

	}
	void newState1::HandleInput()
	{
		sf::Event event;

		while (_data->window.pollEvent(event))
		{
			if (sf::Event::Closed == event.type)
			{
				_data->window.close();
			}
			if (_clock.getElapsedTime().asSeconds() > 0.10)
            {   _clock.restart();
                for (unsigned short int i = 0; i < _bottons->GetSprites().size(); i++)
                {
                    if ( _data->input.IsSpriteClickedOrigin(_bottons->GetSprites().at(i), sf::Mouse::Left, _data->window)  )
                    {
                           switch (i)
                           {
                               case 0:
                                    {
                                    std::cout<<"button0"<<std::endl;
                                     if (_generator.getRightIndexPosition() == 0){
                                                Reset();
                                     }
                                     else{
                                            _bottons->setErrorVisible(0);
                                            _bottons->setPerfectBool(false);
                                            _life->UpdateLife();
                                     }

                                    break;
                                    }
                               case 1:
                                    std::cout<<"button1"<<std::endl;
                                    if (_generator.getRightIndexPosition() == 1){
                                            Reset();
                                     }
                                      else{
                                            _bottons->setErrorVisible(1);
                                            _bottons->setPerfectBool(false);
                                            _life->UpdateLife();
                                     }

                                    break;
                               case 2:
                                    std::cout<<"button2"<<std::endl;
                                    if (_generator.getRightIndexPosition() == 2){
                                            Reset();
                                     }
                                      else{
                                            _bottons->setErrorVisible(2);
                                            _bottons->setPerfectBool(false);
                                            _life->UpdateLife();
                                     }

                                    break;
                               case 3:
                                    std::cout<<"button3"<<std::endl;
                                    if (_generator.getRightIndexPosition() == 3){
                                            Reset();
                                     }
                                      else{
                                            _bottons->setErrorVisible(3);
                                            _bottons->setPerfectBool(false);
                                            _life->UpdateLife();
                                     }

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
                _clock2.restart();
            }
        }
	}
	void newState1::Update(float dt)
	{
		/*if ( _clock.getElapsedTime().asSeconds() > BACK_STATE_TIME )
		{
			_data->machine.RemoveState();
			_data->machine.AddState(StateRef(new MainMenuState(_data)), true);
		} */
		_bottons->MoveOptions();
        if (_life->Empty()) {
            if (_clock2.getElapsedTime().asSeconds() > 0.2 )
                _data->machine.AddState(StateRef(new GameOverState(_data)),true);
        }

	}
    void newState1::Reset()
	{    countResets++;
        _goodjob->setchange(255);
        _generator.increaseRightanswers();
        _generator.resetSettings();
        _question->cleanSprites();
        _bottons->setAllErrorTransparent();
        _question->SetQuestion(_generator.giveQuestion(_mode));
        _bottons->setOptions(_generator.giveOptions());
        if(_generator.getRightanswers() == 4 && _bottons->getPerfectBool()){
            std::cout<<"recompensa _especial"<<std::endl;
            _data->machine.AddState(StateRef(new finishState(_data, _generator.getRightanswers()*10 ,true)),true);
            contador_coint+=_generator.getRightanswers()*10;
        }
        else if (countResets > 3){
            _data->machine.AddState(StateRef(new finishState(_data, _generator.getRightanswers()*10 ,false)),true);
            contador_coint+=_generator.getRightanswers()*10;
        }

	}

	void newState1::Draw(float dt)
	{
		_data->window.clear(sf::Color::Red);
		_data->window.draw(_background);
		_life->Draw();
		_goodjob->Draw();
		_backB->Draw();
        _bottons->Draw();
        _question->Draw();
		_data->window.draw(_title);
		_data->window.display();
	}
}



