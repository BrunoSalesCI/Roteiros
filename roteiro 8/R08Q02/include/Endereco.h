#ifndef ENDERECO_H
#define ENDERECO_H
#include <string>


class Endereco
{
    public:
        Endereco();
        Endereco(std:: string logadouro, std:: string bairro,int numero,std::string cidade,std:: string cep);
        virtual ~Endereco();

        std:: string getLogadouro();
        std:: string getBairro();
        int getNumero();
        std:: string getCidade();
        std:: string getCep();



    protected:
        std:: string logadouro;
        std:: string bairro;
        int numero;
        std::string cidade;
        std:: string cep;

    private:
};

#endif // ENDERECO_H
