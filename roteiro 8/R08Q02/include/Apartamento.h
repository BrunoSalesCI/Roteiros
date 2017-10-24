#ifndef APARTAMENTO_H
#define APARTAMENTO_H
#include "Imovel.h"

class Apartamento : public Imovel
{
    public:
        Apartamento(Endereco,std::string,double,int);
        virtual ~Apartamento();

        std :: string getDescricao();


    protected:
        std:: string posicao;
        double valorDoCondominio;
        int numeroDeVagasNaGaragem;

    private:
};

#endif // APARTAMENTO_H
