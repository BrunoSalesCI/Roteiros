#ifndef CONTA_H
#define CONTA_H
#include <string>
#include "IConta.h"

class Conta : public IConta{
    public:

        Conta(std:: string no,float sala, int n, float sal);
        virtual ~Conta();


            void sacar(double valor);
            void depositar(double valor);


             void definirLimite();

                    std:: string getNomeCliente();
                    float getSalarioMensal();
                    int getNumeroConta();
                    float getSaldo();
                    float getLimite();

                    void setNomeCliente(std:: string no);
                    void setSalarioMensal(float sala);
                    void setNumeroConta(int n);
                    void setSaldo(float sal);
                    void setLimite(float limi);

    protected:

    std:: string nomeCliente;
    float salarioMensal;
    int numeroConta;
    float saldo;
    float limite;


    private:


};

#endif // CONTA_H
