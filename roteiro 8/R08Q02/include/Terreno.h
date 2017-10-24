#ifndef TERRENO_H
#define TERRENO_H
#include "Imovel.h"



class Terreno : public Imovel
{
    public:
        Terreno(Endereco,double);
        virtual ~Terreno();

        std :: string getDescricao();


    protected:

        double area;

    private:
};

#endif // TERRENO_H
