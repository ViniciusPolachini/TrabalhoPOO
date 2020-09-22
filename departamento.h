#ifndef DEPARTAMENTO_H
#define DEPARTAMENTO_H
#include <string>
#include "./funcionario.h"
#define MAX 50

class Departamento{
    
    private:
        std::string codigo, nome;
        static int TotalFuncionarios;
        int NFuncionarios;
        Funcionario* funcionarios[MAX];
        
    public:
        Departamento(){}
        Departamento(std::string _nome, std::string _codigo){
            codigo=_codigo;
            nome=_nome;
            NFuncionarios=0;
            for(int i=0; i<MAX; i++) funcionarios[i] = nullptr;
        } 
       
        void AddFuncionario(Funcionario* funcionario){
            funcionarios[NFuncionarios]=funcionario;
            NFuncionarios++;
        }

        double calculaGastos(){
            double gastos=0;
            for(int i=0; i<NFuncionarios; i++) gastos+=funcionarios[i]->calculaSalario();
            return gastos;
        }
        
        Funcionario** getFuncionarios(){
            return funcionarios;
        }
        
        int getNFuncionarios(){
            return NFuncionarios;
        }

        std::string getCodigo(){
            return codigo;
        }

        std::string getNome(){
            return nome;
        }

        void setCodigo(std::string _codigo){
            codigo=_codigo;
        }

        void setNome(std::string _nome){
            nome=_nome;
        }

        std::string Informacoes(){
            std::string NF = std::to_string(NFuncionarios);
            std::string Gastos= std::to_string(calculaGastos());
            std::string Info="\n\nNome:"+nome+
                            "\nCódigo:"+codigo+
                            "\nNúmero de funcionarios:"+NF+
                            "\nGasto total:"+Gastos;
            return Info;
        }
};
#endif
