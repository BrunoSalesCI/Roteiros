#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>



class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();

       virtual double calculaSalario();

       void setNome(std::string);
       std::string getNome();
       void serMatricula(int);
       int getMatricula();


    protected:

        std:: string nome;
        int matricula;


    private:
};

#endif // FUNCIONARIO_H
