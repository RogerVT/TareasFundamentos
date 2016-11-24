//
//  main.cpp
//  formulaFahrenheit
//
//  Created by Roger Eduardo Vazquez Tuz on 24/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
using namespace std;


int main(int argc, const char * argv[]) {
    
    //Declaración de variables
    
    int iF, iC;
    
    // insert code here...
    cout << "Ingrese los grados en Cº: ";
    cin>>iC;
    
    iF = (int)(9.0/5*iC+32);
    
    cout << "El valor en grados fahrenheit es: "<<iF<<"ºF\n";
    
    
    return 0;
}
