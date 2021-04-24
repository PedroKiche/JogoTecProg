#include <iostream>
#include "Mago.hpp"
#include "Fantasma.hpp"
#include "Aparicao.hpp"
#include "Espectro.hpp"
#include "Gargula.hpp"

int main()
{
    Gerenciador_Grafico gf;
    Mago mago(Vetor2F(200.0f, 200.0f));
    Fantasma fantasma(Vetor2F(400.0f, 400.0f));
    fantasma.inicializar(gf);
    Aparicao aparicao(Vetor2F(300.0f, 300.0f));
    aparicao.inicializar(gf);
    Espectro espectro(Vetor2F(100.0f, 100.0f));
    espectro.inicializar(gf);
    Gargula gargula(Vetor2F(600.0f, 200.0f));
    gargula.inicializar(gf);
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
        fantasma.atualizar(dt);
        aparicao.atualizar(dt);
        espectro.atualizar(dt);
        gargula.atualizar(dt);
        gf.limpar();
        mago.desenhar(gf);
        fantasma.desenhar(gf);
        aparicao.desenhar(gf);
        espectro.desenhar(gf);
        gargula.desenhar(gf);
        gf.mostrar();
        gf.eventosJanela();
    }
    return 0;
}
