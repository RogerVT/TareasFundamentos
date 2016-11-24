//
//  main.cpp
//  horasPelicula
//
//  Created by Roger Eduardo Vazquez Tuz on 24/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int segundosP;
    
    
    // insert code here...
    cout << "Ingresa la duración de la película en segundos: \n";
    cin >> segundosP;
    
    int horas, minutos, segundos;
    horas = segundosP/3600;
    
    segundos = segundosP%3600;
    
    minutos = segundos/60;
    
    segundos =  segundos%60;
    
    cout <<"La duración de la película en horas es: "<<horas<<endl;
    cout <<"La duración de la película en minutos es: "<<minutos<<endl;
    cout <<"La duración de la película en segundos es: "<<segundos<<endl;
    
    
    return 0;
}
