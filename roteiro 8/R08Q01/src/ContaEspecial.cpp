#include "ContaEspecial.h"

#include <iostream>
using namespace std;


ContaEspecial::ContaEspecial(string no,float sala, int n, float sal): Conta(no,sala,n,sal){

}

ContaEspecial::~ContaEspecial()
{
    //dtor
}



void ContaEspecial:: definirLimite(){

    limite = getSalarioMensal()*3;

}
