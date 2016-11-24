//
//  main.cpp
//  billetesA00820409RogerVazquez
//
//  Created by Roger Eduardo Vazquez Tuz on 30/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;


int main(int argc, const char * argv[]) {
    // declaración de variables
    int cantDinero, billetes100, billetes50, billetes20, mon10, mon5, mon2, mon1;
    
    cout<<"Ingresa la cantidad de dinero a usar: \n";
    cin>>cantDinero;
    
    billetes100 = floor(cantDinero/100);
    cantDinero = cantDinero%100;
    
    billetes50 = floor(cantDinero/50);
    cantDinero = cantDinero%50;
    
    billetes20 = floor(cantDinero/20);
    cantDinero = cantDinero%20;
    
    mon10 = floor(cantDinero/10);
    cantDinero = cantDinero%10;
    
    
    mon5 = floor(cantDinero/5);
    cantDinero = cantDinero%5;
    
    mon2 = floor(cantDinero/2);
    cantDinero = cantDinero%2;
    
    mon1 = floor(cantDinero/1);

    
    cout<<"Billetes de 100 necesarios: "<<billetes100<<endl;
    
    cout<<"Billetes de 50 necesarios: "<<billetes50<<endl;
    
    cout<<"Billetes de 20 necesarios: "<<billetes20<<endl;
    
    cout<<"Monedas de 10 necesarias: "<<mon10<<endl;
    
    cout<<"Monedas de 5 necesarias: "<<mon5<<endl;
    
    cout<<"Monedas de 2 necesarias: "<<mon2<<endl;
    
    cout<<"Monedas de 1 necesarias: "<<mon1<<endl;
  
    return 0;
}
