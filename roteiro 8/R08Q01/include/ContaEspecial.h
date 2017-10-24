#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "Conta.h"

class ContaEspecial : public Conta
{
    public:

        ContaEspecial(std::string no,float sala, int n, float sal);

        virtual ~ContaEspecial();



        void definirLimite();



    protected:

    private:
};

#endif // CONTAESPECIAL_H
