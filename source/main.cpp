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

    while(gf.getJanela()->isOpen())
    {   
        
        float dt = relogio.getElapsedTime().asSeconds(); 
        if(dt > 1.0f /20.0f)
            dt= 1.0/20.0f;
        std::cout<< dt << std::endl;
        relogio.restart(); 
        ge.gerenciaEventos();
        mago.atualizar(dt, ge);
        gf.limpar();
        mago.desenhar(gf);
        gf.mostrar();
        ge.resetar();
        ge.eventosJanela();
       
    }
    return 0;

}
