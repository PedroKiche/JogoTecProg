#include<iostream>
#include"Mago.hpp"

int main()
{
    Gerenciador_Grafico gf;
    Gerenciador_Eventos ge;
    Mago mago(Vetor2F(200.0f,200.0f));
    mago.inicializar(gf);
    sf::Clock relogio;
    ge.setJanela(gf.getJanela());

    relogio.restart();

    while(ge.getOpen())
    {   
        
        sf::Time t = relogio.getElapsedTime(); 
        relogio.restart();
        std::cout << t.asSeconds() <<std::endl;
        ge.gerenciaEventos();
        mago.atualizar(t.asSeconds(), ge);
        gf.limpar();
        mago.desenhar(gf);
        gf.mostrar();
        ge.resetar();  
    }
    return 0;

}
