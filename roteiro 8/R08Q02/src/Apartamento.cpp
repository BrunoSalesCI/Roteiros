#include "Apartamento.h"
#include <iostream>

using namespace std;

Apartamento::Apartamento(Endereco ende,std::string pos,double valcon,int nvagas)
{
    endereco = ende;
    posicao = pos;
    valorDoCondominio = valcon;
    numeroDeVagasNaGaragem = nvagas;
}

Apartamento::~Apartamento()
{
    //dtor
}

 string Apartamento:: getDescricao(){

       char num[50];
                string enderecoapartamento;

                sprintf(num,"%d",endereco.getNumero());

                enderecoapartamento  =  endereco.getLogadouro()+" "+ num+" "+endereco.getBairro()+" "+endereco.getCidade()+" " +endereco.getCep();

                cout<<"\nDESCRICAO DO IMOVEL APARTAMENTO: \n\nENDERECO:  "<<enderecoapartamento<<endl;

                cout<<"POSICAO: "<<posicao<<"\nValor do Condominio:  "<<valorDoCondominio<<"\nVagas na garagem:  "<<numeroDeVagasNaGaragem<<endl;

                return "b";

 }
