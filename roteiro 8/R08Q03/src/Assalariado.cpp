#include "Assalariado.h"
#include <iostream>

using namespace std;


Assalariado::Assalariado(double salario)
{
    this->salario = salario;
}

Assalariado::~Assalariado()
{
    //dtor
}


            double Assalariado:: calculaSalario(){

                        return salario;
                    }
