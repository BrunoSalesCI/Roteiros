#include "Funcionario.h"
#include <iostream>

using namespace std;


Funcionario::Funcionario()
{
    //ctor
}

Funcionario::~Funcionario()
{
    //dtor
}
        void Funcionario:: setNome(string nome){
                this-> nome = nome;
        }

        string Funcionario:: getNome(){
                return nome;
        }
        void Funcionario:: serMatricula(int matricula){
                this->matricula = matricula;
        }
        int Funcionario:: getMatricula(){
                return matricula;
         }


        double Funcionario:: calculaSalario(){}
