#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario
{
    public:
        Assalariado(double);
        virtual ~Assalariado();

            double calculaSalario();

    protected:

        double salario;


    private:
};

#endif // ASSALARIADO_H
