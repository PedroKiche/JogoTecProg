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

void MenuRanking::inicializarMenu(bibliotecaGrafica::Gerenciador_Grafico* gf)
{
    for(int i =0; i < 10; i++)
    {
        ranqueados.push_back(Ranqueado());
    }
    inicializar(gf);   
}

void MenuRanking::desenharMenu(bibliotecaGrafica::Gerenciador_Grafico* gf)
{
    desenhar(gf);
    for(int i = 0; i < 10; i++)
    {   
        std::string pont = std::to_string(i+1);
        gf->desenharTexto(pont , Vetor2F(300.0f, 180.0f + i* 40.0f));
        gf->desenharTexto(ranqueados[i].getApelido(), Vetor2F(350.0f, 180.0f + i* 40.0f));
        pont = std::to_string(ranqueados[i].getPontos());
        gf->desenharTexto(pont , Vetor2F(480.0f, 180.0f + i* 40.0f));
    }
    gf->desenharTexto("SAIR(S)" , Vetor2F(700.0f, 550.0f));
    
}

int MenuRanking::selecionaOpcao()
{
    if (bibliotecaGrafica::Gerenciador_Teclado::teclaFoiPressionada(bibliotecaGrafica::Gerenciador_Teclado::S)) //sair
    {
        return 0;
    }
    return 5;
}

void MenuRanking::atualizar(const float t)
{

}

void MenuRanking::ranquea(std::string nome, int pontua)
{
    if(pontua > ranqueados[9].getPontos())
    {
        ranqueados[9].setApelido(nome);
        ranqueados[9].setPontos(pontua);
        for(int i = 8; i >= 0; i--)
        {
            if(ranqueados[i+1].getPontos() > ranqueados[i].getPontos())
            {
                std::string saux;
                int iaux;
                iaux = ranqueados[i].getPontos();
                saux = ranqueados[i].getApelido();
                ranqueados[i] = ranqueados[i+1];
                ranqueados[i+1] = Ranqueado(iaux,saux);
            }
            else
            {
                return;
            }
        }
    }

}
