#include"Relogio.hpp"

Relogio::Relogio()
{

}

Relogio::~Relogio()
{

}

void Relogio::restartar()
{
    relogio.restart();
}

float Relogio::tempoDecorrido() const
{
    return relogio.getElapsedTime().asSeconds();
}