#include <iostream>
#include "Mago.hpp"

int main()
{
    Gerenciador_Grafico gf;
    Mago mago(Vetor2F(200.0f, 200.0f));
    mago.inicializar(gf);
    sf::Clock relogio;
    relogio.restart();

    while (gf.getJanela()->isOpen())
    {

        float dt = relogio.getElapsedTime().asSeconds();
        if (dt > 1.0f / 20.0f)
            dt = 1.0 / 20.0f;
        //std::cout << dt << std::endl;
        relogio.restart();
        mago.atualizar(dt);
        gf.limpar();
        mago.desenhar(gf);
        gf.mostrar();
        gf.eventosJanela();
    }
    return 0;
}
