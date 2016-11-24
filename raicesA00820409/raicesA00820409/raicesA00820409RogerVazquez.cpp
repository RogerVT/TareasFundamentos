//
//  main.cpp
//  raicesA00820409
//
//  Created by Roger Eduardo Vazquez Tuz on 23/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, const char * argv[]) {
    
    
    //declaracion de variables
    int coefA, coefB, coefC;
    double x1, x2;
    
    
    
    //Leer datos de entrada
    cout << "Ingresa el valor del coeficiente 'a' (valor entero) \n";
    cin >> coefA;
    
    cout << "Ingresa el valor del coeficiente 'b' (valor entero) \n";
    cin >> coefB;
    
    cout << "Ingresa el valor del coeficiente 'c' (valor entero) \n";
    cin >> coefC;
    
    //calcular las dos raíces
    
    int d = (4*coefA*coefC);
    int b = (coefB * coefB);
    
  
    
    x1 = (-coefB+(sqrt(b-d)))/(2*coefA);
    x2 = (-coefB-(sqrt(b-d)))/(2*coefA);
          
          
    //imprimir resultados
    
    cout << "El valor de x1 equivale a: "<<x1<<endl;
    cout << "El valor de x2 equivale a: "<<x2<<endl;
    
   //NOTA: Solo se pueden usar números dentro de un determinado rango puesto que en caso de ingresar ciertos valores, el programa regresa el valor "nan" (not a number)
    
    
    return 0;
}
