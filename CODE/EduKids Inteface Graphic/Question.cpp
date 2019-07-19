#include "Question.hpp"

namespace GUI{
    Question::Question(Sergio::GameDataRef data) : _data(data)
	{
	}

	void Question::SetQuestion(std::string inputQuestion){
	    float extra = 15;
	    float yy = 180;
            for (int i=0; i<inputQuestion.length();i++){
                if (inputQuestion[i]>='*' && inputQuestion[i]<='9'){
                        switch(inputQuestion[i]){
                            case '0': if(_sprites.empty()){

                                        AddSprite("cero",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2 + extra;
                                         AddSprite("cero",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                    break;
                            case '1': if(_sprites.empty()){

                                        AddSprite("one",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2 + extra;
                                         AddSprite("one",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                    break;
                            case '2': if(_sprites.empty()){

                                        AddSprite("two",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2+ extra;
                                         AddSprite("two",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                        break;
                            case '3': if(_sprites.empty()){

                                        AddSprite("three",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2+ extra;
                                         AddSprite("three",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                        break;
                            case '4':if(_sprites.empty()){

                                        AddSprite("four",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2+ extra;
                                         AddSprite("four",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                 break;
                            case '5':if(_sprites.empty()){

                                        AddSprite("five",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2+ extra;
                                         AddSprite("five",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                break;
                            case '6':if(_sprites.empty()){

                                        AddSprite("six",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2+ extra;
                                         AddSprite("six",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                 break;
                            case '7': if(_sprites.empty()){

                                        AddSprite("seven",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2 + extra;
                                         AddSprite("seven",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                break;
                            case '8':
                                        if(_sprites.empty()){

                                        AddSprite("eight",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2 + extra;
                                         AddSprite("eight",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                        break;
                            case '9':
                                if(_sprites.empty()){

                                        AddSprite("nine",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2+ extra;
                                         AddSprite("nine",sf::Vector2i(pos.x + xx ,yy));

                                        }
                                         break;
                            case '*':if(_sprites.empty()){

                                        AddSprite("multi",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2+ extra;
                                         AddSprite("multi",sf::Vector2i(pos.x + xx+10 ,yy));

                                        }
                                         break;
                            case '-': if(_sprites.empty()){

                                        AddSprite("minus",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2+ extra;
                                         AddSprite("minus",sf::Vector2i(pos.x + xx +10,yy));

                                        }
                                        break;
                            case '+':if(_sprites.empty()){

                                        AddSprite("plus",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2 + extra;
                                         AddSprite("plus",sf::Vector2i(pos.x + xx +10 ,yy));

                                        }
                                         break;
                            case '/': if(_sprites.empty()){

                                        AddSprite("divide",sf::Vector2i(SCREEN_WIDTH/2 - 150,yy));
                                        }
                                      else{
                                         sf::Vector2f pos = _sprites.back().getPosition();
                                         float xx = _sprites.back().getGlobalBounds().width / 2+ extra;
                                         AddSprite("divide",sf::Vector2i(pos.x + xx +10,yy));

                                        }
                                        break;
                        }
                }
            }


	}

    const std::vector<sf::Sprite> &Question::GetSprites() const
	{
        return _sprites;
	}

    void Question::AddSprite(std::string title, sf::Vector2i pos)
	{
        sf::Sprite sprite(_data->assets.GetTexture(title));
        sf::Vector2f origin = sf::Vector2f(sprite.getGlobalBounds().width / 2,sprite.getGlobalBounds().height/2);
        sprite.setOrigin(origin);
		sprite.setPosition(pos.x, pos.y);
		_sprites.push_back(sprite);
	}

	void Question::Draw()
	{
	    for( int i=0 ; i< _sprites.size(); i++)
            this->_data->window.draw(_sprites.at(i));

	}
    void Question::cleanSprites()
	{
        _sprites.clear();
	}
}
