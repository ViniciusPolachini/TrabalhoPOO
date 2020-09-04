#pragma once
#include "../Modelo/Departamento.h"
#define MAXD 20
#define MAXF MAXD*50

class DataBase{
    
    private:
        Departamento* departamentos[MAXD];
        Funcionario* funcionarios[MAXF];
        int contD=0, contF=0;
        
    public:
        DataBase(){
            for(int i=0;i<MAXD; i++) departamentos[i] = nullptr;
            for(int i=0;i<MAXF;i++) funcionarios[i] = nullptr;
        }
        
        void setSalarioBase(double salario){
            funcionarios[0]->setSalarioBase(salario);
        }

        void AddDepartamento(Departamento* departamento){
            if(contD<MAXD){
                departamentos[contD] = departamento;
                contD++;
            }
            else delete(departamento);
        }

        void AddFuncionario(Funcionario* funcionario, string codigo){
            if(contF<MAXF){
                int i=0;
                for(int i=0; i<contD; i++){
                    if(departamentos[i]->getCodigo()==codigo){
                        funcionarios[contF]=funcionario;
                        contF++;    
                        departamentos[i]->AddFuncionario(funcionario);
                        break;
                    }
                    else if(i==contD) delete(funcionario);
                }
            }
        }

        Departamento** Departamentos(){
            return departamentos;
        }

        Funcionario** Funcionarios(){
            return funcionarios;
        }

        Departamento* getDepartamento(string codigo){
            for(int i=0; i<contD; i++){
                if(departamentos[i]->getCodigo()==codigo){
                    return departamentos[i];
                }
            }
            return nullptr;
        }

        Funcionario* getFuncionarioCodigo(string codigo){
            for(int i=0; i<contF; i++){
                if(funcionarios[i]->getCodigo()==codigo){
                    return funcionarios[i];
                }
            }
            return nullptr;
        }

        Funcionario* getFuncionarioNome(string nome){
            for(int i=0; i<contF; i++){
                if(funcionarios[i]->getNome()==nome){
                    return funcionarios[i];
                }
            }
            return nullptr;
        }

        int NumeroDepartamentos(){
            return contD;
        }

        int NumeroFuncionarios(){
            return contF;
        }
};