
//

#include <iostream>
#include <limits.h>
#include <time.h>
#include <iostream>
#include <limits.h>
#include <time.h>

#include <stdlib.h>     /* srand, rand */
#include <stdio.h>
using namespace std;

//Declaración de constantes GLOBALES
const int iCOL=5;
const int iRENG=5;
bool gana (int iMatM[][iCOL], int iReng, int iCol, int iValor);
bool copiaMatriz(int iMatM[][iCOL], int iRM, int iCM, int iMatB[][iCOL], int iRB, int iCB);
bool copiaInversa(int iMatM[][iCOL], int iRM, int iCM, int iMatB[][iCOL], int iRB, int iCB);
bool existeValor(int iMatM[][iCOL], int iReng, int iCol, int iV);
void inicializaRecReng(int iMatM[][iCOL], int iReng, int iCol);
void inicializaRandom(int iMatM[][iCOL], int iReng, int iCol);
void inicializa6(int iMatM[][iCOL], int iReng, int iCol);
void inicializa1(int iMatM[][iCOL], int iReng, int iCol);
void inicializa2(int iMatM[][iCOL], int iReng, int iCol);
void inicializa3(int iMatM[][iCOL], int iReng, int iCol);
void inicializa(int iMatM[][iCOL], int iReng, int iCol);
void inicializa4(int iMatM[][iCOL], int iReng, int iCol);
void inicializa5(int iMatM[][iCOL], int iReng, int iCol);
void despliega(int iMatM[][iCOL], int iReng, int iCol);
void mayorRenglon(int iMatM[][iCOL], int iRM, int iCM, int iMatB[][iCOL], int iRB, int iCB);
int elMayor(int iMatM[][iCOL], int iReng, int iCol);
int elMenor(int iMatM[][iCOL], int iReng, int iCol);
int cuentaRepeticiones(int iMatM[][iCOL], int iReng, int iCol, int iV);
int menu();
double promedio(int iMatM[][iCOL], int iReng, int iCol);




//Funcion que verifica si gana con un tipo Gato
bool gana (int iMatM[][iCOL], int iReng, int iCol, int iValor)
{

    
    bool gano= true;
    //Revisar si es cuadrada
    
    //No fue cuadrada
    cout<<"No es cuadrada!!\n";
    return false;
}

// Lee el contenido de la matriz con Recorrido por renglones
void inicializaRecReng(int iMatM[][iCOL], int iReng, int iCol)
{
    for (int iR=0; iR<iReng; iR++)
        for (int iC=0; iC<iCol; iC++)
        {
            cout<<"Teclea el elemento ["<<iR<<"]["<<iC<<"]=";
            cin>>iMatM[iR][iC];
        }
}

void inicializaRandom(int iMatM[][iCOL], int iReng, int iCol)
{
    
    
    
}


bool existeValor(int iMatM[][iCOL], int iReng, int iCol, int iV)
{
    
    for (int iR = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++)
            if (iMatM[iR][iC] == iV)
                return true;
    
    return false;
}

int suma(int iMatM[][iCOL], int iReng, int iCol)
{
    //Declaración de Variable que contará
    int iAcum = 0;
    
    
    for (int iR = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++)
            iAcum = iAcum + iMatM[iR][iC];
    
    
    //Retorna la cantidad de veces que lo encontro en la matriz
    return iAcum;
}
double promedio(int iMatM[][iCOL], int iReng, int iCol) {
    return (double) suma(iMatM, iReng, iCol)/(iReng * iCol);
}

int cuentaRepeticiones(int iMatM[][iCOL], int iReng, int iCol, int iV)
{
    //Declaración de Variable que contará
    int iCont=0;
    
    
    
    //Retorna la cantidad de veces que lo encontro en la matriz
    return iCont;
}



//Inicializa con valores random ***sin que se repitan***
void inicializa6(int iMatM[][iCOL], int iReng, int iCol)
{
    //Declaracion de variables
    int iValor, iRango;
    
    //Inicializar la semilla del random para
    //que cada vez sea una secuencia diferente
    srand(time(NULL));
    
    //Inicializar la Matriz con valores con
    //un valor diferente a 1..iReng*iCol
    
    for (int iR = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++)
            iMatM[iR][iC] = 0;
    
    
    
    //Inicializar la matriz con valores entre 1..iReng*iCol
    for (int iR = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++) {
            iValor = rand() % (iReng*iCol) + 1;
            
            while (existeValor(iMatM, iReng, iCol, iValor)) {
                iValor = rand() % (iReng*iCol) + 1;
            }
            
            iMatM[iR][iC] = iValor;
            
        }
    
    
}


//Recorrido por renglones
void inicializa1(int iMatM[][iCOL], int iReng, int iCol){
srand(time(NULL));


    for (int iR=0; iR<iReng; iR++)
        for (int iC = 0; iC<iCol; iC++)
            iMatM[iR][iC]= rand() % 2001-1000;
}

//Recorrido por renglones inicializa con valor de columna
void inicializa2(int iMatM[][iCOL], int iReng, int iCol)
{
    for (int iR = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++)
            iMatM[iR][iC] = iC;
    
    
}

//Inicializa con valor de renglon
void inicializa3(int iMatM[][iCOL], int iReng, int iCol)
{
    
    for (int iR = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++)
            iMatM[iR][iC] = iR;
    
}

void inicializa(int iMatM[][iCOL], int iReng, int iCol)
{
    for (int iR = 0, iV = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++)
            iMatM[iR][iC] = iV++;
    
}



//inicializa con valores consecutivos desde 0..? RRenglones
void inicializa4(int iMatM[][iCOL], int iReng, int iCol)
{
    
    for (int iR = 0, iV = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++)
            iMatM[iR][iC] = iV++;
    
}

//inicializa con valores consecutivos desde 0..? RColumnas
void inicializa5(int iMatM[][iCOL], int iReng, int iCol)
{
    for (int iC = 0, iV = 0; iC < iCol; iC++)
        for (int iR = 0; iR  < iReng; iR++)
            iMatM[iR][iC] = iV++;
    
}




//encuentra el mayor
int elMayor(int iMatM[][iCOL], int iReng, int iCol)
{
    //Declaracion de variables
    int iMax=INT_MIN;
    
    //Codifica instrucciones
    for (int iR = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++)
            if (iMatM[iR][iC] > iMax)
                iMax = iMatM[iR][iC];
    
    
    
    
    //Retornar el valor mayor
    return iMax;
}


//encuentra el menor
int elMenor(int iMatM[][iCOL], int iReng, int iCol)
{
    //Declaracion de variables
    int iMin=INT_MAX;
    
    //Codifica instrucciones
    for (int iR = 0; iR < iReng; iR++)
        for (int iC = 0; iC  < iCol; iC++)
            if (iMatM[iR][iC] < iMin)
                iMin = iMatM[iR][iC];
    
    //Retornar el valor menor
    return iMin;
}

//despliega el contenido de la matriz
void despliega(int iMatM[][iCOL], int iReng, int iCol)
{
    cout<<"    ";
    for(int iC=0; iC<iCol; iC++)
        cout << iC <<"\t";
    cout<<"\n";
    for(int iC=0; iC<iCol; iC++)
        cout << "________";
    cout<<"\n";
    for (int iR=0; iR<iReng; iR++)
    {
        cout<<iR<<"|";
        for(int iC=0; iC<iCol; iC++)
            cout <<"\t"<< iMatM[iR][iC];
        cout<<"\n";
    }
    cout<<"\n";
}

int menu()
{
    //Declaración de variables
    int opcion;
    
    cout<<" Matrices de enteros"
    <<"\n1.   Inicializa1"
    <<"\n2.   Inicializa2"
    <<"\n3.   Inicializa3"
    <<"\n4.   Inicializa4"
    <<"\n5.   Inicializa5"
    <<"\n6.   Inicializa6"
    <<"\n7.   El mayor"
    <<"\n8.   El menor"
    <<"\n9.   Suma"
    <<"\n10. Promedio"
    <<"\n11. Busca un valor"
    <<"\n12. Cuenta repeticiones de un valor"
    <<"\n13. Copia matriz"
    <<"\n14. Invierte matriz"
    <<"\n15. Mayor valor por renglón"
    <<"\n16. gana Diagonal ppal. o inversa, renglon o columna"
    <<"\n17. Despliega Matriz"
    <<"\n18. InicializaRandom"
    <<"\n0. Salir"
    <<"\nTeclea la opcion:";
    
    cin>>opcion;
    
    return  opcion;
}




void mayorRenglon(int iMatM[][iCOL], int iRM, int iCM, int iMatB[][iCOL], int iRB, int iCB)
{
    for (int iR = 0; iR < iRM; iR++)
    { iMatB[iR][0] = INT_MIN;
        for (int iC = 0; iC  < iCM; iC++) {
            if (iMatM[iR][iC] > iMatM[iR][iC]) {
                iMatB[iR][0] = iMatM[iR][iC];
                iMatB[iR][1] = iC;
            }
        }

    

}
}



bool copiaMatriz(int iMatM[][iCOL], int iRM, int iCM, int iMatB[][iCOL], int iRB, int iCB)
{
    
    //Verificar que las columnas y renglones sean iguales
    if (iRM != iRB || iCM != iCB)
        return false;
    //Copiar los elementos de la matriz M a B
    //Terminamos de copiar
    
    for (int iR = 0; iR < iRM; iR++)
        for (int iC = 0; iC  < iCM; iC++)
            iMatB[iR][iC] = iMatM[iR][iC];
    
    
    return true;
    
    //No fueron iguales no se copian
}


bool copiaInversa(int iMatM[][iCOL], int iRM, int iCM, int iMatB[][iCOL], int iRB, int iCB)
{
    
    //Verificar que las columnas y renglones sean iguales
    
    //Copiar los elementos de la matriz M a B
    
    
    //Terminamos de copiar
    return true;
    
    //No fueron iguales no se copian
    return false;
}

int main(int argc, const char * argv[]) {
    //Gana diagonal principal
    int  iMatM[][iCOL]=
    {   {1,0,0,0,1},
        {0,1,0,0,1},
        {0,0,1,0,1},
        {0,0,0,1,1},
        {0,0,0,0,1}
    };
    //Gana Columna
    int  iMatM2[][iCOL]=
    {   {0,0,0,0,1},
        {0,1,0,0,1},
        {0,0,1,1,1},
        {0,1,1,1,1},
        {1,0,0,0,1}
    };
    //Gana  Renglón
    int  iMatM3[][iCOL]=
    {
        {0,1,0,0,0},
        {0,0,1,1,0},
        {1,1,1,1,1},
        {0,1,1,1,0},
        {1,0,0,0,1}
    };
    //Gana diagonales inversa
    int  iMatM4[][iCOL]=
    {   {0,0,0,0,1},
        {0,1,0,1,0},
        {0,0,1,0,0},
        {0,1,0,1,1},
        {1,0,0,0,1}
    };
    //No gana
    int  iMatM5[][iCOL]=
    {   {10,30,40,50,15},
        {10,41,40,51,10},
        {30,40,51,60,80},
        {30,31,30,31,31},
        {31,30,40,50,61}
    };
    
    int iMatB[iRENG][iCOL];
    int iOpcion, iResp, iValor;
    double dPromedio;
    string sValor;
    
    do
    {
        //Inicializa y Actualiza la vcc centinela
        iOpcion = menu();
        
        switch (iOpcion)
        {
            case 0:
                cout<<"Gracias por usar el programa Adios!!!\n";
                break;
            case 1:
                //Inicializa con ceros
                inicializa1(iMatM,iRENG, iCOL);
                despliega(iMatM,iRENG , iCOL);
                break;
            case 2:
                //Inicializa con los valores de columna
                inicializa2(iMatM,iRENG, iCOL);
                despliega(iMatM,iRENG , iCOL);
                break;
            case 3:
                //Inicializa con los valores de renglo
                inicializa3(iMatM,iRENG, iCOL);
                despliega(iMatM,iRENG , iCOL);
                break;
            case 4:
                //Inicializa con los valores consecutivo RRengl
                inicializa4(iMatM,iRENG, iCOL);
                despliega(iMatM,iRENG , iCOL);
                break;
            case 5:
                //Inicializa con los valores consecutivo RCol
                inicializa5(iMatM,iRENG, iCOL);
                despliega(iMatM,iRENG , iCOL);
                break;
            case 6:
                inicializa6(iMatM,iRENG, iCOL);
                despliega(iMatM,iRENG , iCOL);
                break;
            case 7:
                //retorna el mayor
                despliega(iMatM,iRENG , iCOL);
                iResp = elMayor(iMatM,iRENG, iCOL);
                //Desplegar el mayor
                cout<<"El mayor="<<iResp<<endl;
                
                break;
            case 8:
                //Retorna el menor
                despliega(iMatM,iRENG , iCOL);
                iResp=elMenor(iMatM,iRENG, iCOL);
                //Desplegar el menor
                cout<<"El menor="<<iResp<<endl;
                
                break;
            case 9:
                //suma todos los valores de la matriz
                
                despliega(iMatM, iRENG, iCOL);
                iResp = suma(iMatM, iRENG, iCOL);
                cout << "LA SUMA ES "<<iResp;
                
                break;
            case 10:
                //Calcula el promedio de todos los elementos de la matriz
                despliega(iMatM, iRENG, iCOL);
                dPromedio = promedio(iMatM, iRENG, iCOL);
                cout << "El promedio: "<<dPromedio<<endl;

                break;
            case 11:
                //Busca un valor dentro de la matriz
                despliega(iMatM,iRENG , iCOL);
                cout<<"Ingresa tu boleto(Valor a buscar):";
                cin>>iValor;
                if (existeValor(iMatM, iRENG, iCOL, iValor))
                    cout<<"Ganaste un Auto!!\n";
                else
                    cout<<"Suerte para la próxima!!\n";
                
                break;
            case 12:
                //Cuenta las repeticiones de un valor dentro
                //de la matriz
                despliega(iMatM,iRENG , iCOL);
                cout<<"Ingresa  el Valor a contar:";
                cin>>iValor;
                iResp = cuentaRepeticiones(iMatM, iRENG, iCOL, iValor);
                cout<< "El valor "<<iValor<<" existe "<<iResp << " veces\n";
                
                break;
            case 13:
                //Copia matriz
                //DESPLEGARDE LAS MATRICES
                cout<<"\n****MATRIZ M\n==============\n"<<endl;
                despliega(iMatM,iRENG , iCOL);
                cout<<"\n\n----MATRIZ B\n==============\n";
                despliega(iMatB,iRENG , iCOL);
                
                if ( copiaMatriz(iMatM, iRENG, iCOL, iMatB, iRENG, iCOL))
                {
                    cout<<"\n\n**** Ya se copio----MATRIZ B\n==============\n";
                    despliega(iMatB,iRENG , iCOL);
                }
                else
                    cout<<"No se pudo copiar\n";
                break;
                
            case 14:
                //Copia matriz en forma inversa
                //DESPLEGAR LAS MATRICES
                cout<<"\n****MATRIZ M\n==============\n"<<endl;
                despliega(iMatM,iRENG , iCOL);
                cout<<"\n\n----MATRIZ B\n==============\n";
                despliega(iMatB,iRENG , iCOL);
                
                if ( copiaInversa(iMatM, iRENG, iCOL, iMatB, iRENG, iCOL))
                {
                    cout<<"\n****MATRIZ M\n==============\n"<<endl;
                    despliega(iMatM,iRENG , iCOL);
                    cout<<"\n\n**** Ya se copio de forma inversa----MATRIZ B\n==============\n";
                    despliega(iMatB,iRENG , iCOL);
                }
                else
                    cout<<"No se pudo copiar\n";
                break;
                
            case 15:
                //Calcula el mayor valor por renglon
                mayorRenglon(iMatM, iRENG, iCOL, iMatB, iCOL, iRENG);
                despliega(iMatM,iRENG , iCOL);
                despliega(iMatB,iRENG , 2);
                break;
                
            case 16:
                //Gana Gato  con Matrices se prueban todos los casos
                //Con diferentes matrices.
                
                //Diagonal Ppal con iMatM
                despliega(iMatM,iRENG , iCOL);
                if (gana(iMatM, iRENG, iCOL, 1))
                    cout<<"Ganaste un Auto!!\n";
                else
                    cout<<"Suerte para la próxima!!\n";
                
                //Gana columna con iMatM2
                despliega(iMatM2,iRENG , iCOL);
                if (gana(iMatM2, iRENG, iCOL, 1))
                    cout<<"Ganaste un Auto!!\n";
                else
                    cout<<"Suerte para la próxima!!\n";
                
                //Gana Renglon con iMatM3
                despliega(iMatM3,iRENG , iCOL);
                if (gana(iMatM3, iRENG, iCOL, 1))
                    cout<<"Ganaste un Auto!!\n";
                else
                    cout<<"Suerte para la próxima!!\n";
                
                //Gana diagonal Inversa con iMatM4
                despliega(iMatM4,iRENG , iCOL);
                if (gana(iMatM4, iRENG, iCOL, 1))
                    cout<<"Ganaste un Auto!!\n";
                else
                    cout<<"Suerte para la próxima!!\n";
                
                //No Gana con iMatM5
                despliega(iMatM5,iRENG , iCOL);
                if (gana(iMatM5, iRENG, iCOL, 1))
                    cout<<"Ganaste un Auto!!\n";
                else
                    cout<<"Suerte para la próxima!!\n";
                break;
                
            case 17:
                //despliega matriz
                despliega(iMatM, iRENG, iCOL);
                break;
                
            case 18:
                //Inicializa random
                inicializaRandom(iMatM, iRENG, iCOL);
                despliega(iMatM, iRENG, iCOL);
                break;
                
            default:
                cout<<"Opcion Incorrecta, Adios!!!\n";
                break;
                
        }//Fin switch
        
        cout << "Oprime <enter> para continuar...";
        //Para que haga una pausa antes de volver a desplegar el menu de opciones
        //el programa continuará hasta que el usuario de <enter>
        getchar();
        getline(cin, sValor);
        
    }while (iOpcion != 0);
    
    return 0;
}


