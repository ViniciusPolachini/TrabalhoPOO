#include <iostream>
#include <string>
#include "./Funcionario.h"
using namespace std;

class Tecnico : public Funcionario{
    private:
        string funcao;
    public:
        double calculaSalario(){
           return (nivel=="T1") ? salario+salario*0.1 : salario+salario*0.2;
        }
};