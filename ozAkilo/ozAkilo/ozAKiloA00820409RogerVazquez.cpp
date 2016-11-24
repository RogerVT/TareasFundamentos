//
//  main.cpp
//  ozAkilo
//
//  Created by Roger Eduardo Vazquez Tuz on 24/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//
w
#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    //declaración de variables
    int oz;
    string sProducto;
    
    
    
    
    // solicitar datos de entrada

    cout << "Entra el valor en onzas: \n";
    cin >> oz;
    
    getchar();
    cout << "Ingresa el nombre del producto que quieres pesar: ";
    getline(cin, sProducto);
    
    double kg, gram;
    
    gram = oz*28.35;
    
    kg = (int)gram/1000;
    
    gram = (int)gram%1000;
    
    cout <<"El peso de "<<sProducto<< " en el sistema métrico es: \n";
    cout <<kg<<" kilogramos \n";
    cout <<gram<<" gramos\n";
    
    
    
    return 0;
}
