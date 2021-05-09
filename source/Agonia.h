#ifndef _AGONIA_H_
#define _AGONIA_H_

#include "Mago.h"
#include "Relogio.h"
#include "Fase.h"
#include "FaseFactory.h"
#include "Purgatorio.h"
#include "PurgatorioFactory.h"
#include "Floresta.h"
#include "FlorestaFactory.h"
#include "Limiar.h"
#include "LimiarFactory.h"
#include "MenuPrincipal.h"
#include "MenuPausa.h"

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
    int pontuacaoJogo;

public:
    Agonia();
    ~Agonia();
    void executar();
    void geraFasePurgatorio();
    void geraFaseFloresta();
    void geraFaseLimiar();
    void apagaFase();
    void executaFase(float dt);
    void modoCarreira(float dt);
    void jogoPause();
};

#endif