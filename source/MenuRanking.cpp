#include"MenuRanking.h"
#include<iostream>
#include<string>

MenuRanking:: MenuRanking(): Menu(Ids::menuranking, Vetor2F(400.0f, 300.0f), Vetor2F(800.0f, 600.0f), "../JogoTecProg/texture/menu.png")
{
}

MenuRanking::~MenuRanking()
{

}

void MenuRanking::iniciaRanking()
{
    ranking.open("../JogoTecProg/Ranking/ranking.txt", std::ios::in);
    if(ranking.is_open())
    {
        std::string linha;
        for(int i = 0; i < 10; i++)
        {   
            getline(ranking,linha);
            ranqueados[i].setApelido(linha);

            getline(ranking,linha);
            int pont = std::stoi(linha);
            ranqueados[i].setPontos(pont);
        }    
    }
    else 
    {
        std::cout << "Nao foi possivel abrir o arquivo" << std::endl;
    }
    ranking.close();
}

void MenuRanking::carregaRanking()
{
    ranking.open("../JogoTecProg/Ranking/ranking.txt", std::ios::out);
    for(int i = 0; i<10; i++)
    {
        ranking << ranqueados[i].getApelido() << "\n";
        std::string pont = std::to_string(ranqueados[i].getPontos());
        ranking << pont << "\n";
    }
    ranking.close();   
}

void MenuRanking::inicializarMenu(Gerenciador_Grafico* gf)
{
    for(int i =0; i < 10; i++)
    {
        ranqueados.push_back(Ranqueado());
    }
    inicializar(gf);   
}

void MenuRanking::desenharMenu(Gerenciador_Grafico* gf)
{
    desenhar(gf);
    for(int i = 0; i < 10; i++)
    {
        std::cout << i+1 << "   " << ranqueados[i].getApelido() << "   " << std::to_string(ranqueados[i].getPontos()) << std::endl;
    }
}

int MenuRanking::selecionaOpcao()
{
    if (Gerenciador_Teclado::teclaFoiPressionada(Gerenciador_Teclado::S)) //sair
    {
        return 0;
    }
    if (Gerenciador_Teclado::teclaFoiPressionada(Gerenciador_Teclado::C)) //sair
    {
        return 6;
    }
    return 5;
}

void MenuRanking::atualizar(const float t)
{

}