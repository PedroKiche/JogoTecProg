#include "Fase.hpp"
#include<list>

Fase::Fase() : Entidade()
{
    gf = NULL;
    mago = NULL;
}

Fase::Fase(Gerenciador_Grafico *GeGr, Mago *mg, Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char *caminho) : Entidade(id, pos, tam, caminho)
{
    mago = mg;
    gf = GeGr;
}

Fase::~Fase()
{
    //listaEntidades.destruirEntidades();
    gc.removerTodos();
}

void Fase::atualizar(float t)
{
    listaEntidades.atualizarEntidades(t);
    gc.gerenciarColisoes();

    desenhar(gf);
    listaEntidades.desenharEntidades(gf);

    verificarInimigos();   
}

void Fase::adicionar(Entidade_Colidivel *ec)
{
    listaEntidades.inserir(ec);
    gc.adicionarEntidade_Colidivel(ec);
}

Mago* Fase::getMago()
{
    return mago;
}

void Fase::inicializarEntidades()
{
    listaEntidades.inicializarEntidades(gf);
}

void Fase::inicializa(Entidade_Colidivel *ec)
{
    ec->inicializar(gf);
}

void Fase::remover(Entidade_Colidivel *ec)
{
    gc.removerEntidade_Colidivel(ec);
    listaEntidades.removerEntidade(ec);
}

void Fase::adicionarInimigo(Inimigo* ini)
{
    adicionar(ini);
    inimigos.insert(ini);
}

void Fase::verificarInimigos()
{
    std::set<Inimigo *>::iterator itr1;
    std::list<Inimigo* > mortos;
    for (itr1 = inimigos.begin(); itr1 != inimigos.end(); itr1++)
    {
        Inimigo* ini = *itr1;
        if(!ini->getVivo())
        {
            mortos.push_back(ini);
        }
    }
    std::list<Inimigo* >::iterator itr2;
    for(itr2 = mortos.begin(); itr2 != mortos.end(); itr2++)
    {
        Inimigo* morto = *itr2;
        remover(morto);
        inimigos.erase(morto);
        delete morto;
    }
}

