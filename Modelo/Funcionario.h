#include <iostream>
#include <string>
#include<memory>
using namespace std;

class Funcionario{
    protected:
        string codigo, nome, nivel;
        double salario;
    public:
        Funcionario(string _codigo, string _nome){
            codigo=_codigo;
            nome=_nome;
        }
        virtual double calculaSalario(double _salario)=0;
};