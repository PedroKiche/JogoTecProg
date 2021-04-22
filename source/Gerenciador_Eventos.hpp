#ifndef _GERENCIADOR_EVENTOS_HPP_
#define _GERENCIADOR_EVENTOS_HPP_

#include<SFML/Graphics.hpp>

class Gerenciador_Eventos
{
private:
    sf::RenderWindow* janela;
    sf::Event e;

    bool w;
    bool a;
    bool d;

public:
    Gerenciador_Eventos();
    ~Gerenciador_Eventos();
    void setJanela(sf::RenderWindow* janela);
    void eventosJanela();

    void gerenciaEventos();
    void resetar();
    
    bool getW();
    bool getA();
    bool getD();
};

#endif