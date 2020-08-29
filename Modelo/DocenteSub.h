#pragma once
#include "./Docente.h"

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

        void Informacoes(){
            cout<<
            "Nome:"<<nome<<
            "\nCodigo:"<<codigo<<
            "\nNivel:"<<nivel<<
            "\nSalario:"<<calculaSalario()<<
            "\nTitulo:"<<Titulacao<<
            "\bcargaHoraria:"<<cargaHoraria;
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