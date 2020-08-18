#include <iostream>
#include <string>
#include<memory>
using namespace std;

class Funcionario{
    protected:
        string codigo, nome, nivel;
        double salario;
    public:
        Funcionario(string _codigo, string _nome, string _nivel, double _salario){
            codigo=_codigo;
            nome=_nome;
            nivel=_nivel;
        }
        virtual double calculaSalario()=0;
};