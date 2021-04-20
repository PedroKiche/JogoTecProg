#include<iostream>
#include"Mago.hpp"

int main()
{
    Gerenciador_Grafico gf;
    Mago mago(Vetor2F(200.0f,200.0f));
    sf::Event e;
    bool end = false;
    mago.inicializar(gf);
    sf::Clock relogio;

    relogio.restart();

    while(!end)
    {   
        
        sf::Time t = relogio.getElapsedTime(); 
        relogio.restart();
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
