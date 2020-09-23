#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <iostream>
#include <string>
#include <memory>
#include "Constantes.h"

class Funcionario{

    protected:
        std::string codigo, nome, nivel;

    public:
        static double salarioBase;
        Funcionario(){}
        Funcionario(std::string _codigo, std::string _nome){
            codigo=_codigo;
            nome=_nome;
        }

        virtual double calculaSalario()=0;
        virtual std::string getCodigo()=0;
        virtual std::string getNome()=0;
        virtual std::string getNivel()=0;
        virtual double getSalarioBase()=0;
        virtual void setCodigo(std::string _codigo)=0;
        virtual void setNome(std::string _nome)=0;
        virtual void setNivel(std::string _nivel)=0;
        virtual void setSalarioBase(double _salario)=0;
        virtual std::string Informacoes()=0;
};

double Funcionario::salarioBase = 100;

class Tecnico : public Funcionario{

    private:
        std::string funcao;

    public:
        ~Tecnico(){}
        Tecnico(){}
        Tecnico(std::string _codigo, std::string _nome, std::string _nivel, std::string _funcao):
        Funcionario(_codigo, _nome){
            nivel=_nivel;
            funcao=_funcao;
        }

        double calculaSalario(){
           double adicional = salarioBase*Constantes::TabelaDeSalarios(nivel);
           return adicional+salarioBase;
        }

        std::string Informacoes(){
            std::string salario = std::to_string(calculaSalario());
            std::string Info="\nNome:"+nome+
                        "\nCodigo:"+codigo+
                        "\nNivel:"+nivel+
                        "\nSalario:"+salario+
                        "\nFunção:"+funcao+"\n";
            return Info;
        }

        std::string getFuncao(){
            return funcao;
        }

        std::string getNome(){
            return nome;
        }


        std::string getCodigo(){
            return codigo;
        }

        std::string getNivel(){
            return nivel;
        }

        double getSalarioBase(){
            return salarioBase;
        }

        void setNome(std::string _nome){
            nome=_nome;
        }

        void setCodigo(std::string _codigo){
            codigo=_codigo;
        }

        void setNivel(std::string _nivel){
            nivel=_nivel;
        }
        
        void setSalarioBase(double _salario){
            salarioBase=_salario;
        }

        void setFuncao(std::string _funcao){
            funcao=_funcao;
        }
};


class Docente : public Funcionario{

    protected:
        std::string Titulacao;

    public:
        Docente(std::string codigo, std::string nome, std::string _Titulacao):
        Funcionario(codigo, nome)
        {
            Titulacao=_Titulacao;
        }

        virtual std::string getTitulacao()=0;
        virtual void setTitulacao(std::string titulo)=0;
};


class DocenteEfetivo : public Docente{

    private:
        std::string area;

    public:
        ~DocenteEfetivo(){}
        
        DocenteEfetivo(std::string _Area, std::string codigo, std::string nome, std::string _nivel, std::string titulacao):
        Docente(codigo, nome, titulacao){
            area=_Area;
            nivel=_nivel;
        }

        double calculaSalario(){
            double adicional = salarioBase*Constantes::TabelaDeSalarios(nivel);
            return salarioBase+adicional;
        }

        std::string Informacoes(){
            std::string salario = std::to_string(calculaSalario());
            std::string Info="\nNome:"+nome+
                        "\nCodigo:"+codigo+
                        "\nNivel:"+nivel+
                        "\nSalario:"+salario+
                        "\nTitulo:"+Titulacao+
                        "\nArea:"+area+"\n";
            return Info;
        }

        std::string getArea(){
            return area;
        }

        std::string getTitulacao(){
            return Titulacao;
        }

        std::string getNome(){
            return nome;
        }

        std::string getCodigo(){
            return codigo;
        }

        std::string getNivel(){
            return nivel;
        }

        double getSalarioBase(){
            return salarioBase;
        }

        void setArea(std::string _area){
            area=_area;
        }

        void setTitulacao(std::string _titulo){
            Titulacao=_titulo;
        }

        void setNome(std::string _nome){
            nome=_nome;
        }

        void setCodigo(std::string _codigo){
            codigo=_codigo;
        }

        void setNivel(std::string _nivel){
            nivel=_nivel;
        }
        
        void setSalarioBase(double _salario){
            salarioBase=_salario;
        }
};

class DocenteSub : public Docente{

    private:
        int cargaHoraria;

    public:
        ~DocenteSub(){}

        DocenteSub(int _cargaHoraria, std::string codigo, std::string nome, std::string _nivel, std::string titulacao):
        Docente(codigo, nome, titulacao){
                cargaHoraria=_cargaHoraria;
                nivel=_nivel;
        }

        double calculaSalario(){
           double adicional = salarioBase*Constantes::TabelaDeSalarios(nivel);
            return salarioBase+adicional;
        }

        std::string Informacoes(){
            std::string salario = std::to_string(calculaSalario());
            std::string carga = std::to_string(cargaHoraria)+"h";
            std::string Info="\nNome:"+nome+
                        "\nCodigo:"+codigo+
                        "\nNivel:"+nivel+
                        "\nSalario:"+salario+
                        "\nTitulo:"+Titulacao+
                        "\nCarga:"+carga+"\n";
            return Info;
        }

        int getCargaHoraria(){
            return cargaHoraria;
        }

        std::string getTitulacao(){
            return Titulacao;
        }

        std::string getNome(){
            return nome;
        }

        std::string getCodigo(){
            return codigo;
        }

        std::string getNivel(){
            return nivel;
        }

        double getSalarioBase(){
            return salarioBase;
        }

        void setArea(int _cargaHoraria){
            cargaHoraria=_cargaHoraria;
        }

        void setTitulacao(std::string _titulo){
            Titulacao=_titulo;
        }

        void setNome(std::string _nome){
            nome=_nome;
        }

        void setCodigo(std::string _codigo){
            codigo=_codigo;
        }

        void setNivel(std::string _nivel){
            nivel=_nivel;
        }
        
        void setSalarioBase(double _salario){
            salarioBase=_salario;
        }
};
#endif
