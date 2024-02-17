#include <iostream>
using namespace std;
int main() {
    //ejemplo de comentario de linea
    /*ejemplo de comentario de
     multiples lineas*/
  /*  cout << "Hello, World!" << endl;
    int primerNumero;
    int numeroSeleccinado;
    int opcionSeleccionada =5;

    if(opcionSeleccionada > 4){
        cout<<"cumple la condicion"<<endl;
    }
    if(opcionSeleccionada < 5){
        cout<<"Es menor que 5"<< endl;
    }else{
        cout<<"Es un numero valido"<<endl;
    }
    for(int i=0; i<5; i++){
        cout<<"ejecusion de ciclo "<< i<<endl;
    }
    while(opcionSeleccionada<10){
        cout<<"opcion seleccionada "<< opcionSeleccionada<<endl;
        opcionSeleccionada=opcionSeleccionada+1;
    }*/
    //CONSTANTES
           /* const double IVA=0.12;
            const double PROPINA=0.10;
            int montoGastado=0;
            cout << "Ingrese el monto de consumo"<<endl;
            cin>>montoGastado;
            cout << "El monto a cobrar es" << montoGastado + montoGastado*(IVA+PROPINA);
*/
           //ANIDANDO ESTRUCTURAS DE CONTROL
           char continuar='s';
    while (continuar=='s'|| continuar=='S'){
        int numero;
        cout << "Ingrese un numero ";
        cin >> numero;
        if(numero>0){
            cout << "El numero es positivo"<<endl;
        }else if(numero<0){
            cout << "El numero es negativo " << endl;
        }else{
            cout << "El numero es cero" << endl;
        }
        do{
            cout << "Desea ingresar otro numero? (S/N) : ";
            cin>>continuar;
        } while (continuar!='s' && continuar!='S' && continuar!='n' && continuar!='N');
    }
    cout << "Fin del programa";
    return 0;
}
