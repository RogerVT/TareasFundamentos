//
//  main.cpp
//  ciclos
//
//  Created by Roger Eduardo Vazquez Tuz on 05/10/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
using namespace std;



void cicloCreciente(int iN){
    int iK;
    
    iK = 1;
    
    while(iK <= iN) {
        cout << iK << endl;
        iK++;
        
    }
}


void cicloDecreciente(int iN){
    int iK;
    
    iK = iN;
    
    while(iK >= 1) {
        cout << iK << endl;
        iK--;
        
    }
}

void cuentaPositivosNegativosCeros () {
    //Declaración de variables
    int iN, iK, iCP, iCC, iCN, iNum;

    cout << "Ingresa la cantidad de valores a procesar \n";
    cin >> iN;
    
    //inciializar el contador
    
    iCN = 0;
    iCP = 0;
    iCC = 0;
    iK = 1;
    
    //diseño del ciclo
    
    while (iK <= iN) {
        cout << "Ingresa el número "<<iK<<":";
        cin >> iNum;
        
        iK++;
        
        //determinar si es positivo, negatovio o cero
        
        if (iNum > 0) {
            iCP++;
            
        } else {
            if (iNum <= 0) {
                iCN++;
            }else {
                iCC++;
            }
        }
        
    }
    
    if (iN > 0)
        cout << "Positivos = " <<iCP<<"\n Negativos"<<iCN<<"\n Ceros= "<< iCC << endl;
    else
        cout << "Cantidad incorrecta \n";
    
}






int main(int argc, const char * argv[]) {
    // insert code here...
    int iN, iK;
    cout << "Ingresa la cantidad";
    cin>>iN;
    
    cicloCreciente(iN);
    cout << "-----------------------------------------------------------------"<<endl;
    cicloDecreciente(iN);
    cout << "-----------------------------------------------------------------"<<endl;
    cuentaPositivosNegativosCeros();
    
    
    
}
