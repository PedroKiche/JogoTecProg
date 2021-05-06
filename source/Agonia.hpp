#ifndef _AGONIA_HPP_
#define _AGONIA_HPP_

#include "Mago.hpp"
#include "Purgatorio.hpp"
#include "Relogio.hpp"
#include "FaseFactory.hpp"
#include "Fase.hpp"
#include "Floresta.hpp"
#include "FlorestaFactory.hpp"
#include "MenuPrincipal.hpp"
#include "MenuPausa.hpp"

class Agonia
{
private:
    Gerenciador_Grafico gf;
    Fase* fase;
    Relogio relogio;
    MenuPrincipal menuPrincipal;
    MenuPausa menuPausa;
    int estado;
    int faseCarreira;
    bool jogador2;

public:
    Agonia();
    ~Agonia();
    void executar();
    void geraFasePurgatorio();
    void geraFaseFloresta();
    void apagaFase();
    void executaFase(float dt);
    void modoCarreira(float dt);
    void jogoPause();
};

#endif