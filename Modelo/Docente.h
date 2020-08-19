
#include "Funcionario.h"


class Docente : public Funcionario{
    protected:
        string Titulacao;
    public:
        Docente(string codigo, string nome, string _Titulacao):
        Funcionario(codigo, nome)
        {
            Titulacao=_Titulacao;
        }
    
        virtual double calculaSalario(double _salario)=0;
};