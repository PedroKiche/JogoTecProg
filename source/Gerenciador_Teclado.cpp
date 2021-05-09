#include "Gerenciador_Teclado.hpp"

Gerenciador_Teclado::Gerenciador_Teclado()
{
}

Gerenciador_Teclado::~Gerenciador_Teclado()
{
}

bool Gerenciador_Teclado::teclaFoiPressionada(tecla x)
{
    return sf::Keyboard::isKeyPressed(sf::Keyboard::Key(x));
}