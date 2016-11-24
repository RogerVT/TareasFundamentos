//
//  main.cpp
//  porcentajeHMMA00820409RogerVazquez
//
//  Created by Roger Eduardo Vazquez Tuz on 24/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //declaración de variables
    double numeroH, numeroM, porcentajeM, porcentajeH;
    
    
    
    // Ingresar cantidades
   cout << "Ingresa la cantidad de mujeres en el grupo: \n";
    cin >>numeroM;
    
    cout << "Ingresa la cantidad de hombres en el grupo: \n";
    cin >>numeroH;
    
    //calcular el porcentaje
    double numeroTotal = numeroH+numeroM;
    
    porcentajeM = numeroM/numeroTotal * 100;
    porcentajeH = numeroH/numeroTotal * 100;
    
    
    //imprimir resultados
    
    cout << "El porcentaje de mujeres en el grupo es: " <<porcentajeM<<"%"<<endl;
    cout << "El porcentaje de hombres en el grupo es: " <<porcentajeH<<"%"<<endl;
    
    return 0;
}
