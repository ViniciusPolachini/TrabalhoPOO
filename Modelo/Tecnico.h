#pragma once
#include "./Funcionario.h"

class Tecnico : public Funcionario{
    private:
        string funcao;
    public:
        ~Tecnico(){}
        Tecnico(){}
        Tecnico(string _codigo, string _nome, string _nivel, string _funcao):
        Funcionario(_codigo, _nome){
            nivel=_nivel;
            funcao=_funcao;
        }

        double calculaSalario(){
           double adicional =(nivel=="T1") ? salarioBase*0.1 : salarioBase*0.2;
           return salarioBase+adicional;
        }

        void Informacoes(){
            cout<<
            "\nNome:"<<nome<<
            "\nCodigo:"<<codigo<<
            "\nNivel:"<<nivel<<
            "\nSalario:"<<calculaSalario()<<
            "\nFunção:"<<funcao;
        }

        string getFuncao(){
            return funcao;
        }

        string getNome(){
            return nome;
        }


        string getCodigo(){
            return codigo;
        }

        string getNivel(){
            return nivel;
        }

        double getSalarioBase(){
            return salarioBase;
        }

        void setNome(string _nome){
            nome=_nome;
        }

        void setCodigo(string _codigo){
            codigo=_codigo;
        }

        void setNivel(string _nivel){
            nivel=_nivel;
        }
        
        void setSalarioBase(double _salario){
            salarioBase=_salario;
        }

        void setFuncao(string _funcao){
            funcao=_funcao;
        }
};