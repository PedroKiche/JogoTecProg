#include "Teclado.hpp"

Teclado::Teclado()
{
}

Teclado::~Teclado()
{
}

bool Teclado::teclaFoiPressionada(tecla x)
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Key(x));
}