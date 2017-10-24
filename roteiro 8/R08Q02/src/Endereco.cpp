#include "Endereco.h"
#include <iostream>

using namespace std;

Endereco::Endereco()
{

}

Endereco::~Endereco()
{
    //dtor
}



        Endereco::Endereco(string logadouro,string bairro,int numero,string cidade,string cep){
            this ->logadouro = logadouro;
             this -> bairro = bairro;
              this ->numero = numero;
               this -> cidade = cidade;
                this ->cep = cep;

        }



        string Endereco:: getLogadouro(){ return logadouro;}
        string Endereco:: getBairro(){return bairro;}
        int Endereco:: getNumero(){return numero;}
        string Endereco:: getCidade(){return cidade;}
        string Endereco:: getCep(){return cep;}
