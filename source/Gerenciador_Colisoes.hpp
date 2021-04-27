#ifndef _GERENCIADOR_COLISOES_HPP
#define _GERENCIADOR_COLISOES_HPP

#include<set>
#include"Entidade_Colidivel.hpp"

class Gerenciador_Colisoes
{
private:
    std::set<Entidade_Colidivel*> colidiveis;

public:
    Gerenciador_Colisoes();
    ~Gerenciador_Colisoes();
    void adicionarEntidade_Colidivel(Entidade_Colidivel* ec);
    void removerEntidade_Colidivel(Entidade_Colidivel* ec);
    bool estaoColidindo(Entidade_Colidivel* ec1,Entidade_Colidivel* ec2);
    void removerTodos();
    void gerenciarColisoes();    
};

#endif
