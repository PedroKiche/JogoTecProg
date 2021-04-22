#include"Gerenciador_Eventos.hpp"

Gerenciador_Eventos::Gerenciador_Eventos()
{
    janela = NULL;
    w = false;
    a = false;
    d = false;
}

Gerenciador_Eventos::~Gerenciador_Eventos()
{

}
void Gerenciador_Eventos::setJanela(sf::RenderWindow* janela)
{
    this->janela = janela;
}

void Gerenciador_Eventos::gerenciaEventos()
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        a=true;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        w=true;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        d=true;
}

bool Gerenciador_Eventos::getW()
{
    return w;   
}

bool Gerenciador_Eventos::getA()
{
    return a;
}

bool Gerenciador_Eventos::getD()
{
    return d;
}

void Gerenciador_Eventos::resetar()
{
    a = false;
    w = false;
    d = false;
}

void Gerenciador_Eventos::eventosJanela()
{   
    sf::Event evento;
    while(janela->pollEvent(evento))
    {
        switch(evento.type)
        {
            case sf::Event::Closed:
                janela->close();
                break;
            default:
                break;
        }
    }
}