#include<iostream>
#include"Entidade.hpp"

int main()
{
    Gerenciador_Grafico gf;
    Entidade mago(Vetor2F(200.0f,200.0f), Vetor2F(1.0f,1.0f),"../JogoTecProg/texture/mago.png");
    sf::Event e;
    bool end = false;
    mago.inicializar(gf);
    sf::Clock relogio;

    relogio.restart();

    while(!end)
    {
        sf::Time t = relogio.getElapsedTime(); 
        if(gf.getJanela()->pollEvent(e))
            if(e.type == sf::Event::Closed)
                end=true;

        mago.atualizar(t.asSeconds());
        gf.limpar();
        mago.desenhar(gf);
        gf.mostrar();
    
    }
    return 0;

}