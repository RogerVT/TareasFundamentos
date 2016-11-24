//
//  main.cpp
//  Tarea5
//
//  Created by Roger Eduardo Vazquez Tuz on 11/10/16.
//  Copyright © 2016 Roger Eduardo Vazquez Tuz. All rights reserved.
//

#include <iostream>
#include <limits.h>
using namespace std;



void sumatoria (int iN) {
            
            int iSuma, iV;
            iSuma = 0;
            iV = 0;
    
    for (int iK = 1; iK < iN; iK++ ) {
        iV = iV + iK;
        iSuma = iN + iV;
            }
    
    cout<<"La sumatoria hasta n es "<<iSuma<<endl;
            
        }
        
        
void countPosNegCer (int iN) {
            //Declaración de variables
            int iPositivo, iCero, iNegativo, iNum;
            
            //incializar el contador
            iNegativo = 0;
            iPositivo = 0;
            iCero = 0;

            //diseño del ciclo
            
    for (int iK = 1; iK <= iN; iK++) {
                cout << "Ingresa el número: "<<iK<<":";
                cin >> iNum;
                
                //determinar si es positivo, negatovio o cero
                
                if (iNum > 0) {
                    iPositivo++;
                    
                } else {
                    if (iNum == 0) {
                        iCero++;
                    }else {
                        iNegativo++;
                    }
                }

            }
    
        if(iN > 0)
        cout << " Positivos = " <<iPositivo<<"\n Negativos "<<iNegativo<<"\n Ceros = "<< iCero << endl;
            else
                cout<<"Valor inválido! Favor de ingresar un número de valores válido"<<endl;
    
    
    }

    void tablaMultiplicar(int iN) {
            //declaración de variables
            
        int iDato;
            
            if (iN > 0) {
                
                
                for(int iK = 1; iK <= 10; iK++){
                    iDato = iK*iN;
                    
                    cout<<iN<<"*"<<iK<<" = "<<iDato<<endl;
                }
                
            } else {
                
                cout << "Número inválido, favor de ingresar un número válido"<<endl;
            }
            
        }
        
        
 void promedioN(int iN)  {
            int iNum, iValor;
            double dPromedio;
            iValor = 0;
     
     if (iN > 0){
            
     for(int iK = 1; iK <= iN; iK++) {
                
                
                cout << "Ingresa el número: "<<iK<<":";
                cin >> iNum;
                
                iValor = iValor + iNum;
 
            }
            
            dPromedio = (double)iValor/iN;
            
            cout << "El promedio de los números es: "<<dPromedio<<endl;
         
     }else
         cout<<"Valor inválido! Ingrese un valor a computar mayor a cero."<<endl;
     
        }
        
void mayor(int iN) {
int iMax, iV;
            
            if (iN > 0) {
                iMax = INT_MIN;
                
                for (int iK = 1; iK <= iN; iK++) {
                    cout << "Ingrese el valor "<<iK<<":";
                    cin>>iV;
                    
                    if (iV > iMax) {
                        iMax = iV;
                    }
                    
                }
                
                cout<< "El valor mayor es: " <<iMax<<endl;
                
            }
            else
                cout<<"No se procesaron valores!"<<endl;
            
            
        }

void menor (int iN) {
    int iMin, iV;
    
    if (iN > 0) {
        iMin = INT_MAX;
        
        for (int iK = 1; iK <= iN; iK++) {
            cout << "Ingrese el valor "<<iK<<":";
            cin>>iV;
            
            if (iV < iMin) {
                iMin = iV;
            }
        }
        
        cout << "El valor menor es: " <<iMin<<endl;
        
    }
    
    else
        cout<<"No se procesaron valores!"<<endl;
    
}

 void fibo(int iN) {
            int iP1, iP2, iK, iV;
            
            if (iN > 0) {
                iP1 = 0;
                iP2 = 1;
                
                for (iK = 1; iK <= iN; iK++) {
                    cout << iP1 <<",";
                    
                    iV = iP1+iP2;
                    iP1 = iP2;
                    iP2 = iV;
            
                }
            } else {
                cout << "No se procesaron valores \n";
            }
        }
        
void mmp (int iN) {
            int iNum, iValor, iMax, iMin, iPosic1, iPosic2;
            double dPromedio;
            
            if(iN > 0){
                

                iValor = 0;
                iMin = INT_MAX;
                iMax = INT_MIN;
                
                
                for(int iK = 1; iK <= iN; iK++) {
                    cout << "Ingresa el número: "<<iK<<":";
                    cin >> iNum;
                    
                    iValor = iValor + iNum;
                    
                    if (iNum > iMax) {
                        iMax = iNum;
                        iPosic1 = iK;
                    }
                    
                    if (iNum < iMin) {
                        iMin = iNum;
                        iPosic2 = iK;
                    }
                    
                
                    
                }
      
                
                
            } else {
                cout<<"Favor de ingresar un valor válido!"<<endl;
            }
    
          dPromedio = (double)iValor/iN;
    
    cout << "El promedio de los números es: "<<dPromedio<<endl;
    cout <<"El valor máximo es: "<<iMax<<" y se encuentra en la posición "<<iPosic1<<endl;
    cout<<"El valor mínimo es: "<<iMin<<" y se encuentra en la posición "<<iPosic2<<endl;
    
    
        }

int main(int argc, const char * argv[]) {
    
int iN;
            
    do {
    cout<<"Teclee el número para elegir un programa: \n"<<" [1]Sumatoria de n números \n [2]Contar positivos, negativos o ceros \n [3]Tabla de multiplicar \n [4]Promedio de n números \n [5]Número mayor \n [6]Número menor \n [7]Fibonacci \n [8]Mayor, menor, promedio y posición \n [9]Salir \n"<<endl;
            cin>>iN;
                
                switch(iN) {
                
                            case 1:
                                int iS;
                                cout << "Ingresa un número: ";
                                cin>>iS;
                                sumatoria(iS);
                                break;
                            case 2:
                                int iP;
                                cout << "Ingresa la cantidad de valores a procesar: \n";
                                cin >> iP;
                                countPosNegCer(iP);
                                break;
                            case 3:
                                int iM;
                                cout<<"Ingresa un número: \n";
                                cin>>iM;
                                tablaMultiplicar(iM);
                                break;
                            case 4:
                                int iNum;
                                cout<<"Ingresa la cantidad de números a promediar: \n";
                                cin>>iNum;
                                promedioN(iNum);
                                break;
                            case 5:
                                int iValor;
                                cout<<"Ingresa la cantidad de números para calcular su mayor: \n";
                                cin>>iValor;
                                mayor(iValor);
                                break;
                            case 6:
                                int iMenor;
                                cout<<"Ingresa la cantidad de signos a computar: \n";
                                cin>>iMenor;
                                menor(iMenor);
                                break;
                            case 7:
                                int iFibo;
                                cout<<"Ingresa la posición de la sucesión de Fibonacci a consultar: \n";
                                cin>>iFibo;
                                fibo(iFibo);
                                break;
                            case 8: 
                                int iPosic;
                                cout<<"Ingresa la cantidad de signos a computar: \n";
                                cin>>iPosic;
                                mmp(iPosic);
                                break;
                            default:
                                cout<<"El valor ingresado es inválido";
                        
                }
            
            }while (iN != 9 && iN > 0 && iN <= 9);
    
    
    cout<<"Gracias por usar el programa"<<endl;
    return 0;
            
    
        }
        
        


