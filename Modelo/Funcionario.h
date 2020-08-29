#pragma once
#include <iostream>
#include <string>
#include<memory>
using namespace std;

class Funcionario{
    protected:
        string codigo, nome, nivel;
        static double salarioBase;
    public:
        Funcionario(){}
        Funcionario(string _codigo, string _nome){
            codigo=_codigo;
            nome=_nome;
        }
        virtual double calculaSalario()=0;
        virtual string getCodigo()=0;
        virtual string getNome()=0;
        virtual string getNivel()=0;
        virtual double getSalarioBase()=0;
        virtual void setCodigo(string _codigo)=0;
        virtual void setNome(string _nome)=0;
        virtual void setNivel(string _nivel)=0;
        virtual void setSalarioBase(double _salario)=0;
        virtual void Informacoes()=0;
};

double Funcionario::salarioBase = 0;