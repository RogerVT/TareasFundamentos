//
//  main.cpp
//  linealesA00820409RogerVazquez
//
//  Created by Roger Eduardo Vazquez Tuz on 31/08/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    //declaración de variables
    int coefA,coefB,coefC,coefD,coefE,coefF;
    double x,y;
    
    //entrada de datos
    cout<<"Ingresa el valor del coeficiente a: \n";
    cin>>coefA;
    
    cout<<"Ingresa el valor del coeficiente b: \n";
    cin>>coefB;
    
    cout<<"Ingresa el valor del coeficiente c: \n";
    cin>>coefC;
    
    cout<<"Ingresa el valor del coeficiente d: \n";
    cin>>coefD;
    
    cout<<"Ingresa el valor del coeficiente e: \n";
    cin>>coefE;
    
    cout<<"Ingresa el valor del coeficiente f: \n";
    cin>>coefF;
    
    //procesos
    
    y = ((coefA*coefF)-(coefC*coefD))/((coefA*coefE)-(coefB*coefD));
    x = double(((coefC*coefE)-(coefB*coefF)))/double(((coefA*coefE)-(coefB*coefD)));
    
    //presentar datos
    
    cout<<"El valor para x es: "<<x<<endl;
    cout<<"El valor para y es: "<<y<<endl;
    
    

    
    
    
    return 0;
}
