#include "Fase.hpp"

Fase::Fase():Entidade()
{   
    gf = NULL;
    gc = NULL;
    listaEntidades = NULL;
    mago = NULL;
}

Fase::Fase(Gerenciador_Grafico* GeGr, Mago* mg, Ids::Id id, const Vetor2F pos, const Vetor2F tam, const char *caminho): Entidade(id,pos,tam,caminho)
{
    mago=mg;
    gf=GeGr;
    listaEntidades = new Lista_Entidades();
    gc = new Gerenciador_Colisoes();
}

Fase::~Fase()
{
    listaEntidades->destruirEntidades();
    gc->removerTodos();
}

Gerenciador_Colisoes* Fase::getGerenciador_Colisoes()
{
    return gc;
}

Lista_Entidades* Fase::getLista_Entidades()
{
    return listaEntidades;
}

Mago* Fase::getMago()
{
    return mago;
}

Gerenciador_Grafico* Fase::GetGerenciador_Grafico()
{
    return gf;
}

void Fase::atualizar(float t)
{
    listaEntidades->atualizarEntidades(t);
    gc->gerenciarColisoes();

    listaEntidades->desenharEntidades(gf);
}

void Fase::adicionar(Entidade_Colidivel* ec)
{   
    listaEntidades->inserir(ec);
    printf("teste\n");
    gc->adicionarEntidade_Colidivel(ec);
}