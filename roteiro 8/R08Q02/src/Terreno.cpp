#include "Terreno.h"
#include <iostream>

using namespace std;

Terreno::Terreno(Endereco ende,double a)
{
    endereco = ende;
    area = a;
}

Terreno::~Terreno()
{
    //dtor
}


 string Terreno:: getDescricao(){
        char num[50];
                string enderecoterreno;

                sprintf(num,"%d",endereco.getNumero());

                enderecoterreno  =  endereco.getLogadouro()+" "+ num+" "+endereco.getBairro()+" "+endereco.getCidade()+" " +endereco.getCep();

                cout<<"\nDESCRICAO DO TERRENO: \n\nENDERECO:  "<<enderecoterreno<<endl;

                cout<<"AREA DO TERRENO: "<<area<<endl;

                return "c";


 }
