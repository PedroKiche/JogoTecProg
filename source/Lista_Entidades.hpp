#ifndef _LISTA_ENTIDADES_HPP
#define _LISTA_ENTIDADES_HPP

#include "Entidade.hpp"
#include "Lista.hpp"

class Lista_Entidades
{
private:
    Lista<Entidade*> lista;

public:
    Lista_Entidades();
    ~Lista_Entidades();

    void inserir(Entidade* info);
    
    void inicializarEntidades(Gerenciador_Grafico* gf);
    void atualizarEntidades(float t);
    void desenharEntidades(Gerenciador_Grafico* gf);
    void destruirEntidades();
};

#endif