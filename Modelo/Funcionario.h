#include <iostream>
#include <string>

using namespace std;

class Funcionario{
    protected:
        string codigo, nome, nivel;
        double salario;
    public:
        double calculaSalario(){
            return salario;
        }
};