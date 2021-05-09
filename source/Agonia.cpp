#include "Agonia.hpp"
#include <iostream>
#include<stdio.h>


Agonia::Agonia()
{
    menuPrincipal.inicializarMenu(&gf);
    menuPausa.inicializarMenu(&gf);
    fase = NULL;
    estado = 0;
    faseCarreira = 0;
    pontuacaoJogo = 0;
}

Agonia::~Agonia()
{

}

void Agonia::executar()
{
    relogio.restartar();
    while (gf.getJanela()->isOpen())
    {
        float dt = relogio.tempoDecorrido();
        if (dt > 1.0f / 20.0f)
            dt = 1.0 / 20.0f;
        relogio.restartar();
        gf.limpar();

        switch (estado)
        {
        //MENU PRINCIPAL
        case 0:
            menuPrincipal.desenharMenu(&gf);
            estado = menuPrincipal.selecionaOpcao();
            gf.centralizar(Vetor2F(400.0f, 300.0f));
            break;
        
        // PRIMEIRA FASE
        case 1:
            if(fase == NULL)
            {
                geraFasePurgatorio();
            }
            if(fase->FaseAcabou())
            {
                apagaFase();
                estado = 0;
            }
            if(fase)
                executaFase(dt);            
            break;
        
        // SEGUNDA FASE
        case 2:
            if(fase == NULL)
            {
                geraFaseFloresta();
            }
            if(fase->FaseAcabou())
            {
                apagaFase();
                estado = 0;
            }
            if(fase) 
                executaFase(dt);
            break;
        
        case 3:
            if(fase == NULL)
            {
                geraFaseLimiar();
            }
            if(fase->FaseAcabou())
            {
                apagaFase();
                estado = 0;
            }
            if(fase) 
                executaFase(dt);
            break;
        

        //MODO CARREIRA
        case 9:
            modoCarreira(dt);
            break;

        default:
            estado = 0;
            break;
        }      
            
        gf.mostrar();
        gf.eventosJanela();
    }
}

void Agonia::geraFasePurgatorio()
{
    FaseFactory* geraFase = new PurgatorioFactory(&gf,menuPrincipal.getJogador2());
    fase = geraFase->pedirFase();
    fase->inicializarEntidades();   
    if(geraFase){delete geraFase;}
}

void Agonia::geraFaseFloresta()
{
    FaseFactory* geraFase = new FlorestaFactory(&gf,menuPrincipal.getJogador2());
    fase = geraFase->pedirFase();
    fase->inicializarEntidades();
    if(geraFase){delete geraFase;}
}

void Agonia::geraFaseLimiar()
{
    FaseFactory* geraFase = new LimiarFactory(&gf,menuPrincipal.getJogador2());
    fase = geraFase->pedirFase();
    fase->inicializarEntidades();
    if(geraFase){delete geraFase;}
}

void Agonia::apagaFase()
{
    delete fase;
    fase = NULL;
}

void Agonia::executaFase(float dt)
{   
    menuPausa.devoPausar();
    if(!menuPausa.getPause())
    {
        fase->atualizar(dt);
   
        if(fase->getMago1()->getPosicao().x < 400.0f)
            gf.centralizar(Vetor2F(400.0f,300.0f));
        else if(fase->getMago1()->getPosicao().x > (fase->getTamanho().x)-400.0f)
            gf.centralizar(Vetor2F((fase->getTamanho().x)-400.0f,300.0f));
        else
            gf.centralizar(Vetor2F(fase->getMago1()->getPosicao().x, 300.0f));
    }
    else 
        jogoPause();
}

void Agonia::modoCarreira(float dt)
{
    if(fase == NULL && faseCarreira == 0)
    {
        geraFasePurgatorio();
        faseCarreira = 1;
    }
    else if(fase->FaseAcabou() && faseCarreira == 1)
    {
        pontuacaoJogo += fase->getPontuacao();
        apagaFase();
        geraFaseFloresta();
        faseCarreira = 2;
    }
    else if(fase->FaseAcabou() && faseCarreira == 2)
    {
        pontuacaoJogo += fase->getPontuacao();
        apagaFase();
        geraFaseLimiar();
        faseCarreira = 3;
    }
    else if(fase->FaseAcabou() && faseCarreira == 3)
    {   
        pontuacaoJogo += fase->getPontuacao();
        apagaFase();
        estado = 0;
        faseCarreira = 0;
    }
    if(estado != 0)
        executaFase(dt);
}

void Agonia::jogoPause()
{
    menuPausa.desenharMenu(&gf);
    gf.centralizar(Vetor2F(400.0f, 300.0f));
    switch (menuPausa.selecionaOpcao())
    {
    case 0:
        menuPausa.setPause(false);
        break;
    
    case 1:
        //implementar
    
    case 2:
        pontuacaoJogo = 0;
        apagaFase();
        estado = 0;
        faseCarreira = 0;

    default:
        break;
    }
}