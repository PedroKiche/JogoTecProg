#include "Agonia.hpp"
#include <iostream>
#include<stdio.h>
#include "PurgatorioFactory.hpp"

Agonia::Agonia()
{
    menuPrincipal.inicializar(&gf);
    menuPausa.inicializar(&gf);
    fase = NULL;
    estado = 0;
    faseCarreira = 0;
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
            menuPrincipal.desenhar(&gf);
            estado = menuPrincipal.selecionaOpcao();
            gf.centralizar(Vetor2F(400.0f, 300.0f));
            break;
        
        // PRIMEIRA FASE
        case 1:
            if(fase == NULL)
            {
                geraFasePurgatorio();
            }
            executaFase(dt);
            if(fase->FaseAcabou())
            {
                apagaFase();
                estado = 0;
            } 
            break;
        
        // SEGUNDA FASE
        case 2:
            if(fase == NULL)
            {
                geraFaseFloresta();
            }
            executaFase(dt);
            if(fase->FaseAcabou())
            {
                apagaFase();
                estado = 0;
            } 
            break;
        
        //MODO CARREIRA
        case 3:
            modoCarreira(dt);
            break;

        default:
            break;
        }      
            
        gf.mostrar();
        gf.eventosJanela();
    }
}

void Agonia::geraFasePurgatorio()
{
    FaseFactory* geraFase = new PurgatorioFactory(&gf);
    fase = geraFase->pedirFase();
    fase->inicializarEntidades();
}

void Agonia::geraFaseFloresta()
{
    FaseFactory* geraFase = new FlorestaFactory(&gf);
    fase = geraFase->pedirFase();
    fase->inicializarEntidades();
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
   
        if(fase->getMago()->getPosicao().x < 400.0f)
            gf.centralizar(Vetor2F(400.0f,300.0f));
        else if(fase->getMago()->getPosicao().x > 2800.0f)
            gf.centralizar(Vetor2F(2800.0f,300.0f));
        else
            gf.centralizar(Vetor2F(fase->getMago()->getPosicao().x, 300.0f));
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
        apagaFase();
        geraFaseFloresta();
        faseCarreira = 2;
    }
    else if(fase->FaseAcabou() && faseCarreira == 2)
    {
        apagaFase();
        estado = 0;
        faseCarreira = 0;
    }
    
    if(estado != 0)
        executaFase(dt);
}

void Agonia::jogoPause()
{
    menuPausa.desenhar(&gf);
    gf.centralizar(Vetor2F(400.0f, 300.0f));
    switch (menuPausa.selecionaOpcao())
    {
    case 0:
        menuPausa.setPause(false);
        break;
    
    case 1:
        //implementar
    
    default:
        break;
    }
}