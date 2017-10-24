#include "Casa.h"
#include <iostream>
#include <string>

using namespace std;

Casa::Casa(Endereco ende, int npavi,int qquar, double aterr, double  acons)
{
    endereco = ende;
    numeroDePavimentos = npavi;
    quantidadeDeQuartos = qquar;
    areaDoTerreno = aterr;
    areaConstruida = acons;

}

Casa::~Casa()
{
    //dtor
}


        string Casa:: getDescricao(){

                char num[5];
                string enderecocasa;

                sprintf(num,"%d",endereco.getNumero());

                enderecocasa  =  endereco.getLogadouro()+" "+ num+" "+endereco.getBairro()+" "+endereco.getCidade()+" " +endereco.getCep();

                cout<<"\nDESCRICAO DO IMOVEL CASA: \n\nENDERECO:  "<<enderecocasa<<endl;
                cout<<"Quartos: "<<quantidadeDeQuartos<<"\nPavimentos:  "<<numeroDePavimentos<<"\nArea Terreno:  "<<areaDoTerreno<<"\nArea Construida:  "<< areaConstruida<<endl;

                return "a";

    }
