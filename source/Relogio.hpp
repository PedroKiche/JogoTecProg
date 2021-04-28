#ifndef _RELOGIO_HPP_
#define _RELOGIO_HPP_

#include<SFML/Graphics.hpp>

class Relogio
{
private:
    sf::Clock relogio;

public:
    Relogio();
    ~Relogio();
    void restartar();
    float tempoDecorrido();
};


#endif