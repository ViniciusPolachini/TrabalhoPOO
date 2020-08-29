#pragma once
#include "./Docente.h"

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

        void Informacoes(){
            cout<<
            "Nome:"<<nome<<
            "\nCodigo:"<<codigo<<
            "\nNivel:"<<nivel<<
            "\nSalario:"<<calculaSalario()<<
            "\nTitulo:"<<Titulacao<<
            "\bArea:"<<area;
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