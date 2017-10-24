#include <iostream>
#include "ContaEspecial.h"



using namespace std;

int main()
{




Conta pessoa1 = Conta("paulo alves",2300,12345,3000);

ContaEspecial *pessoa2 = new ContaEspecial("antonio carlos",5000,33333,4500);


pessoa1.definirLimite();
cout<< "o limite do ser humano eh : "<< pessoa1.getLimite()<<endl;
pessoa2->definirLimite();
cout<< "o limite do ser humano eh : "<< pessoa2->getLimite()<<endl;

pessoa1.sacar(500);
pessoa2->depositar(100);

cout<< "o saldo do ser humano eh : "<< pessoa2->getSaldo()<<endl;
cout<< "o saldo do ser humano eh : "<< pessoa1.getSaldo()<<endl;


    return 0;
}
