#include <iostream>
#include "Mago.hpp"
#include "Purgatorio.hpp"
#include "Gerenciador_Colisoes.hpp"
#include <stdio.h>

int main()
{
    Gerenciador_Grafico gf;
    Mago mago(Vetor2F(200.0f, 200.0f));
    printf("teste\n");
    Purgatorio purgatorio(&gf, &mago);
    printf("teste\n");
    purgatorio.inicializar(&gf);


    sf::Clock relogio;
    relogio.restart();

    while (gf.getJanela()->isOpen())
    {

        float dt = relogio.getElapsedTime().asSeconds();
        if (dt > 1.0f / 20.0f)
            dt = 1.0 / 20.0f;
        //std::cout << dt << std::endl;
        relogio.restart();
        gf.limpar();
        purgatorio.desenhar(&gf);
        purgatorio.atualizar(dt);
        std::cout << mago.getPosicao().x << "  " << mago.getPosicao().y << std::endl;
        gf.centralizar(Vetor2F(mago.getPosicao().x,300.0f));
        gf.mostrar();
        gf.eventosJanela();
    }
    return 0;
}
