#ifndef SISTEMAGERENCIAFOLGA_H
#define SISTEMAGERENCIAFOLGA_H
#include "Funcionario.h"

class SistemaGerenciaFolga
{
    public:
        SistemaGerenciaFolga();
        virtual ~SistemaGerenciaFolga();

    void setFuncionarios();
    double calculaValorTotalFolha();
    double consultaSalarioFuncionario();


    protected:

        Funcionario funcionarios [5];


    private:
};

#endif // SISTEMAGERENCIAFOLGA_H
