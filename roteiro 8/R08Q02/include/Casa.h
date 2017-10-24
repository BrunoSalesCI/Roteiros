#ifndef CASA_H
#define CASA_H
#include"Imovel.h"


class Casa : public Imovel
{
    public:
        Casa(Endereco,int,int, double, double);
        virtual ~Casa();



        std:: string getDescricao();

    protected:

        int numeroDePavimentos;
        int quantidadeDeQuartos;
        double areaDoTerreno;
        double areaConstruida;

    private:
};

#endif // CASA_H
