#include <iostream>
#include <string>
#include <memory>
#include <vector>
using namespace std;

class Instrumento{//abstrata
    protected:
        string Marca, Nome;
        float Preco;
         static int cont;
    public:
        Instrumento(string _Marca, string _Nome, float _Preco){
            Marca=_Marca;
            Nome=_Nome;
            Preco=_Preco;
        }
        virtual void Relatorio()=0;
};


class InstrumentoDeCorda : public Instrumento{
    public:
        int Cordas;
    public:
        ~InstrumentoDeCorda(){}
        InstrumentoDeCorda():Instrumento("oi", "Thcau", 200){
            Cordas=5;
        }
        InstrumentoDeCorda(string _Marca, string _Nome, float _Preco, int _Cordas):Instrumento(_Marca,_Nome,_Preco){
            if(_Cordas>=4){
                Cordas=_Cordas;
            }
            else{
                InstrumentoDeCorda::~InstrumentoDeCorda();
            }
        }
        float Promocao(){
            return Preco-Preco*0.1;
        }
        void Relatorio(){
            cout <<"\n\n[Instrumento de corda]\nMarca:" << Marca << "\nNome:" << Nome << "\nCordas:"<< Cordas<<"\nPreco:" << Promocao();
        }
};

InstrumentoDeCorda** createInstrumentosDeCorda(InstrumentoDeCorda** x){
    return x;
}

int main(){
    InstrumentoDeCorda* x[3];
    for(int i=0; i<3; i++){
        x[i] = new InstrumentoDeCorda("Coisa", "DeMais", 5000, i+4);
    }
    InstrumentoDeCorda** y= createInstrumentosDeCorda(x);
    y[1]->Relatorio();
    
   // cout<<y[0]<<"\n\n";
    //y[0]=x;
    //cout<<typeid(*y[0]).name()<<"\n";
    //cout<<typeid(*z).name()<<"\n";
    //if(typeid(*y[0]).name()==typeid(InstrumentoDeCorda).name()) y[0]->Relatorio();
    
    }