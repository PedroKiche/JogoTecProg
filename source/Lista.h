#ifndef _LISTA_H_
#define _LISTA_H_
#include<iostream>

template <typename TL>
class Lista
{
private:
    class Elemento
    {
    private:
        TL info;
        Elemento *anterior;
        Elemento *proximo;

    public:
        Elemento(TL info = NULL, Elemento *anterior = NULL, Elemento *proximo = NULL);
        ~Elemento();

        TL getInfo() const;
        void setInfo(const TL  info);

        Elemento *getAnt() const;
        void setAnt(Elemento*  ant);

        Elemento *getProx() const;
        void setProx(Elemento*  prox);

        void remover();
    };

    Elemento *inicio;
    Elemento *fim;
    Elemento *atual;

public:
    Lista();
    ~Lista();

    void inserir(TL info);
    void limpar();

    TL removeInicio();
    TL getInicio();
    TL irProx();
    void removerElemento(TL elemento);
};

#include "ListaImplementacao.h"
#endif