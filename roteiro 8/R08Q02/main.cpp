#include <iostream>
#include <string>


#include"Endereco.h"
#include"Apartamento.h"
#include "Casa.h"
#include"Terreno.h"
#include "Imovel.h"


using namespace std;

int main()
{


Imovel *imoveis[4]; //declaração do conjunto de imoveis

Endereco enderecoimovel[5]; //declaração do conjunto para armazenar endereços de todos os imoveis

enderecoimovel [0] = Endereco("rua da banha","bancarios",35,"joao pessoa","58051444"); //contrutor de Endereco
enderecoimovel [1] = Endereco ("rua algusta","paulista",366,"recife","55484778");   //Endereco(string logadouro,string bairro,int numero,string cidade,string cep);
enderecoimovel [2] = Endereco("loteamento 456","varzea",00,"RECIFE","784673336");
enderecoimovel [3] = Endereco("loteamento caraibas","centro",00000,"salvador","48348736");
enderecoimovel[4] = Endereco("avenida mato","baixa",4421,"campina grande","757746747");



//criando array polimorfico dos imoveis com seus respectivos construtores e valores de variaveis.

imoveis[0] = new Casa(enderecoimovel[0], 3,5,30,10); //Casa(Endereco endereco, int numeropavimentos,int quantdequartos, double areadoterreno, double  areaconstruida);
imoveis[1] = new Casa(enderecoimovel[1], 4,6,20,15);
imoveis[2] = new Terreno(enderecoimovel[2],1000);       //  terreno(Endereco endereco,double area)
imoveis[3] = new Terreno(enderecoimovel[3],3000);
imoveis[4] = new Apartamento(enderecoimovel[4],"nascente sul",200,2);   //Apartamento(Endereco endereco,string posicao,double valorcondominio,int nvagasgaragem)





//função que exibe todas as informaçoes sobre os imoveis
    imoveis[0]->getDescricao();
    imoveis[1] ->getDescricao();
    imoveis [2] ->getDescricao();
    imoveis [3] ->getDescricao();
    imoveis [4] ->getDescricao();





    getchar();

    return 0;
}
