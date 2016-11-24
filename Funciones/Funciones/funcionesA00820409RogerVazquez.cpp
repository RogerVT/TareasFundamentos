//
//  main.cpp
//  Funciones
//
//  Created by Roger Eduardo Vazquez Tuz on 31/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
using namespace std;



//Función de libras a kg

int librasKilogramos(int iLibras) {
    return (int)(0.453592 * iLibras);
}

//Función de km a mmillas

int kiloMetrosMillas(int iKM) {
    return (int)(0.062137 * iKM);
}

//función de kg a libras. Casting por el valor equals double

int kilogramosALibras (int kg) {
    return (int)(2.2046 * kg);
}

//funcion de area circulo
double areaCirculo (int diametro) {
    double pi = 3.1416;
    
    return ((pi*(diametro*diametro))/4.0);
    
}

//funcion de area rombo

double areaRombo (int longD1, int longD2) {
    return ((longD2*longD1)/2);
    
}


//Función que despliega la información
void miInfo() {
    cout <<"ITC Roger Eduardo Vazquez\nMatrícula: A00820409\nCampeche\n";
    
}


int main(int argc, const char * argv[]) {
    
    //Declaración de variables
    int iKM, kg, iMillas, iLibras, diametro, longD1, longD2;
    double iCirculo, iRombo;
    
    
    
    
    
    
    //Desplegar mi información
    miInfo();
    
    

        
    cout << "Teclea los kilogramos: \n";
    cin>>kg;
    cout <<"Teclea los kilómetros\n";
    
    cout << "Teclea las libras: \n";
    cin>>iLibras;
    
    cout <<"Teclea los millas\n";
    cin>>iMillas;
        cin>>iKM;
    
    
    
    cout << "Teclea la longitud del diámetro del círculo: \n";
    cin>>diametro;
    
    
    cout << "Teclea la longitud de la diagonal 1: \n";
    cin>>longD1;
    
    cout << "Teclea la longitud de la diagonal 2: \n";
    cin>>longD2;
        
        //Llamar las funciones para hacer desplegar la información
        
        iLibras = kilogramosALibras(kg);
        iMillas = kiloMetrosMillas(iKM);
        kg = librasKilogramos(iLibras);
        iCirculo = areaCirculo(diametro);
        iRombo = areaRombo(longD1, longD2);
    
    
    
        //Mostrar resultados
    cout<<iLibras<<" libras en kilos son: "<<kg<< " kilogramos"<<endl;
    cout<<iKM<< " kilómetros en millas son: "<<iMillas<<" millas\n";
    cout<<kg<<" kilogramos en libras son: "<<iLibras<< " libras"<<endl;
    cout << "El área del círculo es: \n"<<iCirculo<<"\n";
    cout << "El área del rombo es: \n"<<iRombo<<endl;
    
    
    
    
    
    

    
    return 0;
}
