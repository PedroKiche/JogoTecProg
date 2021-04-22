#include"Gerenciador_Eventos.hpp"

Gerenciador_Eventos::Gerenciador_Eventos()
{
    janela = NULL;
    w = false;
    a = false;
    d = false;
    open = false;
}

Gerenciador_Eventos::~Gerenciador_Eventos()
{

}
void Gerenciador_Eventos::setJanela(sf::RenderWindow* janela)
{
    this->janela = janela;
    open = true;
}

void Gerenciador_Eventos::gerenciaEventos()
{
    while (janela->pollEvent(e))
    {
        // check the type of the event...
        switch (e.type)
        {
            // window closed
            case sf::Event::Closed:
                janela->close();
                open = false;
                break;

            // key pressed
            case sf::Event::KeyPressed:
                if (e.key.code == sf::Keyboard::A)
                    a=true;
                if (e.key.code == sf::Keyboard::W)
                    w=true;
                if (e.key.code == sf::Keyboard::D)
                    d=true;
                break;

            // we don't process other types of events
            default:
                break;
    }
}
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

bool Gerenciador_Eventos::getOpen()
{
    return open;
}