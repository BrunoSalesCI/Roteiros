#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#include"Funcionario.h"


class Comissionado : public Funcionario
{
    public:
        Comissionado();
        virtual ~Comissionado();

            double calculaSalario();


    protected:
        double vendasSemanais;
        double percentualComissao;



    private:
};

#endif // COMISSIONADO_H
