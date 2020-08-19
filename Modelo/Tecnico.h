
#include "./Funcionario.h"


class Tecnico : public Funcionario{
    private:
        string funcao;
    public:
        ~Tecnico(){}

        Tecnico(string _codigo, string _nome, string _nivel, string _funcao, double _salario):
        Funcionario(_codigo, _nome){
            nivel=_nivel;
            salario=calculaSalario(_salario);
        }

        double calculaSalario(double _salario){
           return (nivel=="T1") ? _salario+_salario*0.1 : _salario+_salario*0.2;
        }
};