#include"MenuRanking.h"
#include<iostream>
#include<string>

MenuRanking:: MenuRanking(): Menu(Ids::menuranking, Vetor2F(400.0f, 300.0f), Vetor2F(800.0f, 600.0f), "../JogoTecProg/texture/menuranking.png")
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
        std::string pont = std::to_string(i);
        gf->desenharTexto(pont , Vetor2F(300.0f, 180.0f + i* 40.0f));
        gf->desenharTexto(ranqueados[1].getApelido(), Vetor2F(350.0f, 180.0f + i* 40.0f));
        pont = std::to_string(ranqueados[i].getPontos());
        gf->desenharTexto(pont , Vetor2F(480.0f, 180.0f + i* 40.0f));
    }
    gf->desenharTexto("SAIR(S)" , Vetor2F(700.0f, 550.0f));
    
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

