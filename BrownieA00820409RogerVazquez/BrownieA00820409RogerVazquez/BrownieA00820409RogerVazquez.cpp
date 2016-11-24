//
//  main.cpp
//  BrownieA00820409RogerVazquez
//
//  Created by Roger Eduardo Vazquez Tuz on 30/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    // Declaración de variables
    int cantidadBrownies, numeroH, cantidadBrowniesH, cantidadAsilo;
    
    cout<<"Ingresa la cantidad de brownies para repartir: \n";
    cin>>cantidadBrownies;
    
    cout <<"¿Cuántos huérfanos recibirán brownies el día de hoy? \n";
    cin>>numeroH;
    
    
    cantidadBrowniesH = floor(cantidadBrownies/numeroH);
    cantidadAsilo = cantidadBrownies % numeroH;
    
    cout << "Brownies para huérfanos: "<<cantidadBrowniesH <<"\n";
    cout << "Brownies para ancianos: " <<cantidadAsilo<< endl;
    
    
    
    
    
    
    return 0;
}
