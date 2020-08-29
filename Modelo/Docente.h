#pragma once
#include "./Funcionario.h"

class Docente : public Funcionario{
    protected:
        string Titulacao;
    public:
        Docente(string codigo, string nome, string _Titulacao):
        Funcionario(codigo, nome)
        {
            Titulacao=_Titulacao;
        }

        virtual string getTitulacao()=0;
        virtual void setTitulacao(string titulo)=0;
};