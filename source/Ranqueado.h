#ifndef _RANQUEADO_H_
#define _RANQUEADO_H_

#include<string>

class Ranqueado
{
private:
    std::string apelido;
    int pontos;

public:
    Ranqueado();
    Ranqueado(const int pontos, const std::string nome);
    ~Ranqueado();

    std::string getApelido() const;
    void setApelido(const std::string apelido);

    int getPontos() const;
    void setPontos(const int pontos);
};

#endif