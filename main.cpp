#include <iostream>
using namespace std;

struct Prenda{
    char nombre[30];
    char talla[10];
    float precio;
    int cantidad;
};

void mostrarMenu(){
    cout<<"-------- Menu --------"<<endl;
    cout<<"1. Agregar Prenda"<<endl;
    cout<<"2. Mostrar lista"<<endl;
    cout<<"3. Salir"<<endl;
}

void menu(){
    int opcion = 0;
    do{
        mostrarMenu();
        cout<<"Elige tu opcion"<<endl;
        cin>>opcion;
        switch(opcion){
            case 1: 
                agregarPrenda();
                break;
            case 2:
                mostrarPrendas();
                break;
            default:
                cout<<"Opcion Invalida, intentelo de nuevo"<<endl;
        }
    }while(opcion!=3);
}

int main(){
    cout<<"Hola esta es una prueba de cambios de git"<<endl;
}