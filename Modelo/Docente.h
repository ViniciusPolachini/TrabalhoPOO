
#include "Funcionario.h"


class Docente : public Funcionario{
    protected:
        string Titulacao;
    public:
        Docente(string codigo, string nome, string nivel, string _Titulacao, double salario):Funcionario(codigo, nome, nivel, salario)
        {
            Titulacao=_Titulacao;
        }
        virtual double calculaSalario()=0;
};