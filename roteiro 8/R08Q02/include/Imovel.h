#ifndef IMOVEL_H
#define IMOVEL_H
#include"Endereco.h"
#include <string>
#include <stdio.h>




class Imovel
{
    public:
        Imovel();
        virtual ~Imovel();

        virtual std::string getDescricao() = 0;

        Endereco getEndereco();

    protected:

        Endereco endereco;

    private:
};

#endif // IMOVEL_H
