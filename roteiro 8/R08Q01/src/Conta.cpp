#include "Conta.h"
#include <iostream>
#include <string>


using namespace std;


Conta::Conta(string no,float sala, int n, float sal)

{
        setNomeCliente(no);
        setSalarioMensal(sala);
        setNumeroConta(n);
        setSaldo(sal);   //ctor
}

Conta::~Conta()
{
    //dtor
}
                void Conta::sacar(double valor){
                saldo  = saldo - valor;
                }
                void Conta::depositar(double valor){

                   saldo = saldo + valor;
                }

                    string Conta::getNomeCliente(){ return nomeCliente; }
                    float Conta::getSalarioMensal(){return salarioMensal; }
                    int   Conta::getNumeroConta(){return numeroConta; }
                    float Conta::getSaldo(){return saldo; }
                    float Conta::getLimite(){return limite; }

                    void Conta::setNomeCliente(string no){ nomeCliente = no;}
                    void Conta::setSalarioMensal(float sala){salarioMensal = sala;}
                    void Conta::setNumeroConta(int n){numeroConta = n;}
                    void Conta::setSaldo(float sal){saldo = sal; }
                    void Conta::setLimite(float limi){limite = limi;}


                    void Conta::definirLimite(){


                        limite  = getSalarioMensal()*2;

                    }
