#include <iostream>
#include <math.h>

using namespace std;


void mesDia(int mesNumero) {
    
    switch(mesNumero){
        case 1: cout<< "El mes "<<mesNumero<<"tiene 31 días \n";
            break;
        case 2: cout<< "El mes "<<mesNumero<<"tiene 28 días \n";
            break;
        case 3: cout<< "El mes "<<mesNumero<<"tiene 31 días \n";
            break;
        case 4: cout<< "El mes "<<mesNumero<<"tiene 30 días \n";
            break;
        case 5: cout<< "El mes "<<mesNumero<<"tiene 31 días \n";
            break;
        case 6: cout<< "El mes "<<mesNumero<<"tiene 30 días \n";
            break;
        case 7: cout<< "El mes "<<mesNumero<<"tiene 31 días \n";
            break;
        case 8: cout<< "El mes "<<mesNumero<<"tiene 31 días \n";
            break;
        case 9: cout<< "El mes "<<mesNumero<<"tiene 30 días \n";
            break;
        case 10: cout<< "El mes "<<mesNumero<<"tiene 31 días \n";
            break;
        case 11: cout<< "El mes "<<mesNumero<<"tiene 30 días \n";
            break;
        case 12: cout<< "El mes "<<mesNumero<<"tiene 31 días \n";
            break;
        default: cout<<"Valor inválido!"<<endl;
    }
    
}




int main() {
    int iOpcion, diaMes;
    
    cout<<"Seleccione el programa deseado: "<<endl;
    cout<<"[1]Día mes \n [2]Calculadora \n [3]Calcula el IMC \n [4]Día siguiente \n [5]Zodíaco \n [6]Nivel de grasa corporal \n [7]Piedra, papel o tijeras \n [8]Estacion \n [0] Salir"<<endl;
    cin>>iOpcion;
    
    if (iOpcion == 1) {
        cout<<"Ingresa el número de mes \n";
        cin>>diaMes;
        mesDia(diaMes);
        
        
    }
    if (iOpcion == 2) {
        
    }
    if (iOpcion == 3) {
        
    }
    if (iOpcion == 4 {
        
    }
    if iOpcion == 5 {
        
    }
    else {
        cout<<"Gracias, adiós";
        
    }
    
    
    