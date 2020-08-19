#include <iostream>
#include <string>
#include<memory>
#include "./Funcionario.h"
using namespace std;
#define MAX 50

class Departamento{
    private:
        string codigo, nome;
        unique_ptr<Funcionario> funcionarios[];
    public:
        Departamento(){}
        Departamento(string _codigo, string _nome){
        } 
};