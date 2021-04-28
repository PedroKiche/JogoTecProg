#include "Fase.hpp"

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

    this->desenhar(gf);
    listaEntidades.desenharEntidades(gf);
   
}

void Fase::adicionar(Entidade_Colidivel *ec)
{
    listaEntidades.inserir(ec);
    gc.adicionarEntidade_Colidivel(ec);
}