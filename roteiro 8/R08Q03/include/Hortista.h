#ifndef HORTISTA_H
#define HORTISTA_H
#include "Funcionario.h"

class Hortista : public Funcionario
{
    public:
        Hortista();
        virtual ~Hortista();


    double calculaSalario();


    protected:
        double salarioPorHora;
        double horasTrabalhadas;

    private:
};

#endif // HORTISTA_H
