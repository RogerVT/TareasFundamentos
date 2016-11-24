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
    
    int iSuma;
    
    //fórmula de la sumatoria
    iSuma = (iN*(iN+1))/2;
    
    //imprimir resultado
    cout<<iSuma<<endl;
    
}


void countPosNegCer (int iN) {
    //Declaración de variables
    int iK, iPositivo, iCero, iNegativo, iNum;
    
    //incializar el contador
    
    iNegativo = 0;
    iPositivo = 0;
    iCero = 0;
    iK = 1;
    
    //diseño del ciclo
    
    while (iK <= iN) {
        cout << "Ingresa el número: "<<iK<<":";
        cin >> iNum;
        
        iK++;
        
        //determinar si es positivo, negatovio o cero
        
        if (iNum > 0) {
            iPositivo++;
            
        } else {
            if (iNum <= 0) {
                iNegativo++;
            }else {
                iCero++;
            }
        }
        
    }
    
    if (iN > 0)
        cout << "Positivos = " <<iPositivo<<"\n Negativos"<<iNegativo<<"\n Ceros= "<< iCero << endl;
    else
        cout << "Cantidad incorrecta \n";
    
}

void tablaMultiplicar(int iN) {
    //declaración de variables
    
    int iK, iDato;
    
    cout<<"Ingresa un número: \n";
    cin>>iN;
    
    iK  = 1;
    
    if (iN > 0) {
        
        
        while (iK <= 10) {
            iDato = iK*iN;
            
            cout<<iN<<"*"<<iK<<"= "<<iDato<<endl;
            
            
            
            iK++;
        }
        
        
    } else {
        
        cout << "Número inválido, favor de ingresar un número válido"<<endl;
    }
    
}

    
    void promedioN(int iN)  {
        int iNum, iK, iValor;
        double dPromedio;
        
        iK = 1;
        iValor = 0;
        
        while (iK <= iN) {
            
            
            cout << "Ingresa el número: "<<iK<<":";
            cin >> iNum;
            
            iValor = iValor + iNum;
            
            
            
            iK++;
            
        }
        
        dPromedio = (double)iValor/iN;
        
        cout << "El promedio de los números es: "<<dPromedio<<endl;
        
    }

    void mayor(int iN) {
        int iMax, iK, iV;

        if (iN > 0) {
            iMax = INT_MIN;
            iK = 1;

            while (iK <= iN) {
                cout << "Ingrese el valor "<<iK<<":";
                cin>iV;

                if (iV > iMax) {
                    iMax = iV
                }


                iK++;


            }

            cout << "El valor mayor es: " <<iMax<<endl;

        }

        else
            cout<<"No se procesaron valores!"<<endl;


    }

    void elZodiaco (int iN) {
        int iNum, iT, iA, iF, iV, iK;

        iT = 0;
        iA = 0;
        iF = 0;
        iV = 0;
        iK = 1;

        while(iK <= iN) {
             cout <<"Ingrese el número relacionado al signo del zodiaco deseado\n [1]Aries \n [2]Tauro \n [3]Géminis \n [4]Cáncer \n [5]Leo \n [6]Virgo \n [7]Libra \n [8]Escorpión \n [9]Sagitario \n [10]Capricornio \n [11]Acuario \n [12]Piscis \n";
            cin>>iNum;
    
    if ((iNum == 1)||(iNum == 5)||(iNum == 9)) {
        iF++;
    } else {
        if ((iNum == 2)||(iNum == 6)||(iNum == 10)) {
            iT++;
        }else{
            if ((iNum == 3)||(iNum == 7)||(iNum == 11)) {
                iV++;
            }else{
                if ((iNum == 4)||(iNum == 8)||(iNum == 12)) {
                    iA++;
                }else{
                    cout<<"Inválido, ingrese un valor válido";

                    iK = 0;
                }
            }
        }
    }
            iK++;    
        }

       cout<<"Se computaron "<<iN<<" signos zodiacales, de los cuales: \n"<<iF<<" son fuego \n"<<iT<<" son tierra \n"<<iV<<" son aire \n"<<iA<<" son agua"<<endl;

    }

   void fibo(int iN) {
    int iP1, iP2, iK, iV;

    if (iN > 0) {
        iP1 = 0;
        iP2 = 1;
        iK = 1;

        while (iK < iN) {
            cout << iP1 <<",";

            iV = iP1+iP2;
            iP1 = iP2;
            iP2 = iV;

            iK++;
        }
    } else {
        cout << "No se procesaron valores \n";
    }
   }

   void adivina (int iN) {
    int iValor, iK, iResp;
    iK = 1;
    iValor = 8;

        while (iK<=iN) {
            cout <<iValor<<", \n";
            
            iValor = iValor + iK;
            iK++;
            
            
        }
        
        while (iResp != iValor) {
            
            cout<<"¿Cúal es el siguiente valor? \n";
            cin>>iResp;
            
            if (iResp!= iValor)
            cout<<"Incorrecto \n";
            
        }
        
        cout<<"El valor es correcto"<<endl;
        
        
        
        

   }

   void mmp (int iN) {
    int iNum, iK, iValor, iMax, iMin, iV, iV2;
    double dPromedio;

    if(iN > 0){

    iK = 1;
    iValor = 0;
    iMin = INT_MAX;
    iMax = INT_MIN;


    while(iK <= iN) {
        cout << "Ingresa el número: "<<iK<<":";
            cin >> iNum;
            
            iValor = iValor + iNum;

            if (iNum > INT_MIN) {
                iMax = iNum;
            }

            if (iNum < INT_MAX) {
                iMin = iNum;
            }
            
            
            
            iK++;

    }
    dPromedio = (double)iValor/iN;
        
        cout << "El promedio de los números es: "<<dPromedio<<endl;
        cout <<"El valor máximo es: "<<iMax<<endl;
        cout<<"El valor ínimo es: "<<iMin<<endl;
        


    } else {
        cout<<"Favor de ingresar un valor válido!"<<endl;
    }     

   }
   void menor (int iN) {
     int iMin, iK, iV;

        if (iN > 0) {
            iMax = INT_MAX;
            iK = 1;

            while (iK <= iN) {
                cout << "Ingrese el valor "<<iK<<":";
                cin>iV;

                if (iV < iMin) {
                    iMin = iV
                }


                iK++;


            }

            cout << "El valor menor es: " <<iMin<<endl;

        }

        else
            cout<<"No se procesaron valores!"<<endl;

   }

   void mayorCentinela(int iN) {
    int iMax, iV;

    iMax = INT_MIN;

    cout<<"Ingrese un valor, si desea terminar, teclee cero \n";
    cin >>iV; 

    while (iV != 0) {
        if (iV > iMax)
            iMax = iV;

       cout<<"Ingrese un valor, si desea terminar, teclee cero \n";
    cin >>iV;  
    }
    if (iV == INT_MIN)
        cout<<"No se procesaron valores \n";
        else {
            cout <<"El mayor valor fue: "<<iMax<<endl;
        }

   }

      void menorCentinela(int iN) {
    int iMin, iV;

    iMax = INT_MAX;

    cout<<"Ingrese un valor, si desea terminar, teclee cero \n";
    cin >>iV; 

    while (iV != 0) {
        if (iV > iMin)
            iMin = iV;

       cout<<"Ingrese un valor, si desea terminar, teclee cero \n";
    cin >>iV;  
    }
    if (iV == INT_MAX)
        cout<<"No se procesaron valores \n";
        else {
            cout <<"El mayor valor fue: "<<iMin<<endl;
        }

   }

   void promedioCentinela (int iN) {
        int iNum, iK, iValor;
        double dPromedio;
        
        iK = 1;
        iValor = 0;
        
        cout << "Ingresa el número, ingresa cero para salir: "<<iK<<":";
        cin >> iNum;
        while ((iK =! 0)&&(iK <= iN)) {
            
            
            cout << "Ingresa el número: "<<iK<<":";
            cin >> iNum;
            
            iValor = iValor + iNum;
            
            
            
            iK++;
            
        }
        
        dPromedio = (double)iValor/iN;
        
        cout << "El promedio de los números es: "<<dPromedio<<endl;
        
    }
   


            

    
    void elMenu(int iN) {
        do {
            
            if (iN == 1) {
                int iS;
                
                cout << "Ingresa un número: ";
                cin>>iS;
                sumatoria(iS);
                
            }
            if (iN == 2) {
                int iP;
                cout << "Ingresa la cantidad de valores a procesar: \n";
                cin >> iN;
                
                countPosNegCer(iP);
            }
            if (iN == 3) {
                int iM;
                
                cout<<"Ingresa un número: \n";
                cin>>iM;
                
                tablaMultiplicar(iM);
            }
            if (iN == 4) {
                int iNum;
                
                cout<<"Ingresa la cantidad de números a promediar: \n";
                cin>>iNum;
                promedioN(iNum);
            }
             if (iN == 5) {
                int iValor;
                
                cout<<"Ingresa la cantidad de números para calcular su mayor: \n";
                cin>>iValor;
                mayor(iValor);
            }
             if (iN == 6) {
                int iSign;
                
                cout<<"Ingresa la cantidad de signos a computar: \n";
                cin>>iSign;
                elZodiaco(iSign);
            }
            if (iN == 7) {
                int iFibo;
                
                cout<<"Ingresa la posición de la sucesión de Fibonacci a consultar: \n";
                cin>>iFibo;
                fibo(iFibo);
            }
             if (iN == 8) {
                int iPosic;
                
                cout<<"Ingresa la posición de la sucesión que deseas calcular \n";
                cin>>iPosic;
                adivina(iPosic);
            }
            if (iN == 9) {
                int iNumbers;
                
                cout<<"Ingresa la cntidad de valores que deseas procesar \n";
                cin>>iNumbers;
                mmp(iNumbers);
            }

            if (iN == 10) {
                int iMenor;
                
                cout<<"Ingresa la cantidad de valores que deseas procesar \n";
                cin>>iMenor;
                menor(iMenor);
            }
             if (iN == 11) {
                int iMayorCentinela;
                
                cout<<"Ingresa la cantidad de valores que deseas procesar \n";
                cin>>iMayorCentinela;
                mayorCentinela(iMayorCentinela);
            } 
            if (iN == 12) {
                int iMenorc;
                
                cout<<"Ingresa la cantidad de valores que deseas procesar \n";
                cin>>iMenorc;
                menorCentinela(iMenorc);
            }
             if (iN == 13) {
                int iPromedioC;
                
                cout<<"Ingresa la cantidad de valores que deseas procesar \n";
                cin>>iPromedioC;
                promedioCentinela(iPromedioC);
            }




            
        } while (iN != 0 && iN > 0 && iN <= 4);
        
        
        
    }
    
    
    int main(int argc, const char * argv[]) {
        
        int iNum;
        
        cout<<"Teclee el número para elegir un programa: \n"<<" [1]Sumatoria de n números \n [2]Contar positivos, negativos o ceros \n [3]Tabla de multiplicar \n [4]Promedio de n números \n  [5]Número mayor \n  [6]Signo zodiacal \n  [7]Fibonacci \n  [8]Adivina el número \n  [9]Mayor, menor y promedio \n  [10]Número menor \n  [11]Número mayor centinela \n  [12]Número menor centinela \n  [13]Promedio centinela \n [0]Salir \n"<<endl;
        cin>>iNum;
        elMenu(iNum);
        
        
        return 0;
    }


