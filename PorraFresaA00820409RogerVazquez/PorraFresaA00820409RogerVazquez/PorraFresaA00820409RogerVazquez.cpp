//
//  main.cpp
//  PorraFresaA00820409RogerVazquez
//
//  Created by Roger Eduardo Vazquez Tuz on 30/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
#include <math.h>


using namespace  std;


int main(int argc, const char * argv[]) {
    
    // declaración de variables
    double metros;
    int bultos;
    
    
    //procesos
    
    cout<< "Ingresa la cantidad de metros deseada: "<<endl;
    cin>>metros;
    double kgSobrantes;
    
    bultos = ceil(metros*35/10.0);
    kgSobrantes = bultos*10-(metros*35);
    
    
    cout<<"Se requieren: "<<bultos<< " bultos para hacer el rollo de fresa"<<endl;
    cout<<"Y sobran: "<<kgSobrantes<<" kilos"<<endl;
    
    
    
    
    
    return 0;
    
}
