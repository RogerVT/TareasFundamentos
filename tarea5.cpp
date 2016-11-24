#include <iostream>
#include <math.h>
using namespace std;


void raices (int iA, int iB, int iC, double &dX1, double &dX2) {
    double dRaiz;
    int iCuatro;
    
    iCuatro = 4*iA*iC;
    dRaiz = sqrt((iB*iB)-iCuatro);
    
    dX1 = ((-iB)+dRaiz)/(4*iC);
    dX2 = ((-iB)-dRaiz)/(4*iC);
    
}

void calculaKgGrs(int iLb, int &iKg, double &dGrs) {
    
    dGrs = iLb * 453.592;
    iKg = (int)dGrs/1000;
    dGrs = (int)dGrs%1000;
}



int main(int argc, const char * argv[]) {
    int iA, iB, iC, iLb, iKg, iOpcion;
    double dX1, dX2, dGrs;
    
    
    
    do {
        cout<<"Teclee la opción deseada \n[1]Raíces de un polinomio \n[2]Libras a kilos";
        cin>>iOpcion;
        
        if (iOpcion == 1) {
            cout <<"Ingresa los coeficientes del polinomio en orden \n";
            cout <<"Coeficiente A: ";
            cin >> iA;
            cout <<"\n Coeficiente B: ";
            cin >> iB;
            cout <<"\n Coeficiente C: ";
            cin >> iC;
            
            raices(iA, iB, iC, dX1, dX2);
            cout <<"Las raíces del polinomio son \n X1 = " << dX1 << "\n X2 = "<< dX2<<endl;
            
        }
        if (iOpcion == 2) {
            cout <<"Ingresa la cantidad en libras"<<endl;
            cin>>iLb; 
            
            calculaKgGrs(iLb, iKg, dGrs);
            cout<<iLb<<" en sistema internacional equivale a: "<<iKg<<" kilos, y "<<dGrs<<" gramos"<<endl;
        }
      

        
        }
    while (iOpcion != 0 && iOpcion > 0 && iOpcion <= 2);
    
        
    }
    
    