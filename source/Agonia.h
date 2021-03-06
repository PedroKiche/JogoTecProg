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
#include "MenuRanking.h"
#include <string>

class Agonia
{
private:
    bibliotecaGrafica::Gerenciador_Grafico gf;
    Fase* fase;
    bibliotecaGrafica::Relogio relogio;
    MenuPrincipal menuPrincipal;
    MenuPausa menuPausa;
    MenuRanking menuRanking;
    int estado;
    int faseCarreira;
    int pontuacaoJogo;
    std::string nick;
    int contador;

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
    void escolherApelido();
};

#endif