#pragma once
#include <iostream>
#include <string>
#include <memory>
#include "./funcionario.h"
#define MAX 50

class Departamento{
    
    private:
        string codigo, nome;
        static int TotalFuncionarios;
        int NFuncionarios;
        Funcionario* funcionarios[MAX];
        
    public:
        Departamento(){}
        Departamento(string _nome, string _codigo){
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

        string getCodigo(){
            return codigo;
        }

        string getNome(){
            return nome;
        }

        void setCodigo(string _codigo){
            codigo=_codigo;
        }

        void setNome(string _nome){
            nome=_nome;
        }

        string Informacoes(){
            string NF = to_string(NFuncionarios);
            string Gastos= to_string(calculaGastos());
            string Info="\n\nNome:"+nome+
            "\nCódigo:"+codigo+
            "\nNúmero de funcionarios:"+NF+
             "\nGasto total:"+Gastos;
            return Info;
        }
};

