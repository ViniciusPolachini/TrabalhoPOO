#pragma once
#include <iostream>
#include <string>
#include <memory>
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
        virtual string Informacoes()=0;
};

double Funcionario::salarioBase = 0;


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

        string Informacoes(){
            string salario = to_string(calculaSalario());
            string Info="\nNome:"+nome+
                        "\nCodigo:"+codigo+
                        "\nNivel:"+nivel+
                        "\nSalario:"+salario+
                        "\nFunção:"+funcao;
            return Info;
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


class Docente : public Funcionario{

    protected:
        string Titulacao;

    public:
        Docente(string codigo, string nome, string _Titulacao):
        Funcionario(codigo, nome)
        {
            Titulacao=_Titulacao;
        }

        virtual string getTitulacao()=0;
        virtual void setTitulacao(string titulo)=0;
};


class DocenteEfetivo : public Docente{

    private:
        string area;

    public:
        ~DocenteEfetivo(){}
        
        DocenteEfetivo(string _Area, string codigo, string nome, string _nivel, string titulacao):
        Docente(codigo, nome, titulacao){
            area=_Area;
            nivel=_nivel;
        }

        double calculaSalario(){
            double adicional = (nivel=="D1") ? salarioBase*0.05 : ((nivel=="D2") ? salarioBase*0.1 : salarioBase*0.2);
            return salarioBase+adicional;
        }

        string Informacoes(){
            string salario = to_string(calculaSalario());
            string Info="\nNome:"+nome+
                        "\nCodigo:"+codigo+
                        "\nNivel:"+nivel+
                        "\nSalario:"+salario+
                        "\nTitulo:"+Titulacao+
                        "\nFunção:"+area;
            return Info;
        }

        string getArea(){
            return area;
        }

        string getTitulacao(){
            return Titulacao;
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

        void setArea(string _area){
            area=_area;
        }

        void setTitulacao(string _titulo){
            Titulacao=_titulo;
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
};

class DocenteSub : public Docente{

    private:
        int cargaHoraria;

    public:
        ~DocenteSub(){}

        DocenteSub(int _cargaHoraria, string codigo, string nome, string _nivel, string titulacao):
        Docente(codigo, nome, titulacao){
                cargaHoraria=_cargaHoraria;
                nivel=_nivel;
        }

        double calculaSalario(){
            double adicional = (nivel=="S1") ? salarioBase*0.05 : salarioBase*0.1;
            return salarioBase+adicional;
        }

        string Informacoes(){
            string salario = to_string(calculaSalario());
            string carga = to_string(cargaHoraria);
            string Info="\nNome:"+nome+
                        "\nCodigo:"+codigo+
                        "\nNivel:"+nivel+
                        "\nSalario:"+salario+
                        "\nTitulo:"+Titulacao+
                        "\nFunção:"+carga;
            return Info;
        }

        int getCargaHoraria(){
            return cargaHoraria;
        }

        string getTitulacao(){
            return Titulacao;
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

        void setArea(int _cargaHoraria){
            cargaHoraria=_cargaHoraria;
        }

        void setTitulacao(string _titulo){
            Titulacao=_titulo;
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
};
