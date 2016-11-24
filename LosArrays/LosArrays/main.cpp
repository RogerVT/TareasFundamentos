

#include <stdlib.h>
#include <iostream>
#include <time.h>
#include <limits.h>

using namespace std;

//*************
//Despliega el menu de opciones y
//lee la opcion del teclado
int menu( )
{
    //Declaración de varialbes
    int iOp;
    
    //Desplegar menu y leer opcion
    cout << "Arreglos de enteros" <<
    "\n1. Inicializa1" <<
    "\n2. Inicializa2" <<
    "\n3. Inicializa3" <<
    "\n4. Inicializa4" <<
    "\n5. Inicializa5" <<
    "\n6. El mayor" <<
    "\n7. El menor"<<
    "\n8. Suma"<<
    "\n9. Promedio"<<
    "\n10. Busca un valor"<<
    "\n11. Busca un valor desde una posición"<<
    "\n12. Busca posición"<<
    "\n13. Cuenta repeticiones de un valor"<<
    "\n14. Copia"<<
    "\n15. Inversa"<<
    "\n16. Iguales"<<
    "\n0. Salir"<<
    "\nTeclea la opcion:";
    cin>>iOp;
    
    //Retornar opcion
    return iOp;
}
void despliega(int iArrA[], int iS)
{
    
    for (int iR = 0; iR < iS; iR++) {
        
        cout<<"Arreglo[" << iR<<" ]= "<<iArrA[iR]<<endl;
    }
    
}
void despliega(string iArrA[], int iS)
{
    
    for (int iR = 0; iR < iS; iR++) {
        
        cout<<"Arreglo[" << iR<<" ]= "<<iArrA[iR]<<endl;
    }
    
}
bool buscaValor(int iArrA[], int iS, int iValor)
{
    //Recorrer todo el arreglo si lo encuentra
    // retornar true
    for (int iR = 0; iR < iS; iR++) {
        if (iArrA[iR] == iValor){
            return true;
        }
    }
    
    
    //No lo encontro
    return false;
}


//*************
//inicializa1
//Diseña una función llamada inicializa1, con
// valores aleatorios
//a[0] = 1000
//a[1] = -999
//a[2] = 4
//a[3] = -600
//:
//*************
void inicializa1(int iArrA[], int iS)
{
    srand(time(NULL));
    
    for (int iR = 0; iR < iS; iR++ ) {
        iArrA[iR] = rand()%2001-1000;
    }
    
}
//*************
//inicializa2
//Diseña una función llamada inicializa2,
//que inicializa el arreglo recibido como parámetro
//con la siguiente serie 0, 2, 4, 6,.....
//a[0] = 0
//a[1] = 2
//a[2] = 4
//a[3] = 6
//*************
void inicializa2(int iArrA[], int iS)
{
    for (int iR = 0; iR < iS; iR++) {
        iArrA[iR] = iR*2;
    }
}
//*************
//inicializa3
//Diseña una función llamada inicializa3, que inicializa
//el arreglo de enteros recibido como parámetro con la
//siguiente serie de valores, que consideran el tamaño del arreglo:
//si el arreglo es de tamaño 10,
//el arreglo deberá quedar como sigue:
//9, 8, 7, 6,5, 4, 3, 2, 1, 0.
//Si el tamaño es 4:
//a[0] = 3
//a[1] = 2
//a[2] = 1
//a[3] = 0
//*************
void inicializa3(int iArrA[], int iS)
{
    for( int iR = 0, iValue = iS-1; iR < iS; iR++) {
        iArrA[iR] = iValue--;
        
    }
}
//inicializa4
//Diseña una función llamada inicializa4, que inicializa el arreglo de enteros
//recibido como parámetro con la siguiente serie:
//1, 2, 4, 8, 16, 32, etc.
//a[0] = 1
//a[1] = 2
//a[2] = 4
//a[3] = 8
//a[4] = 16
//:
void inicializa4(int iArrA[], int iS)
{
    for (int iR = 0, iValue = 1; iR < iS; iR++) {
        iArrA[iR] = iValue;
        iValue = iValue*2;
        
    }
}
void inicializaRandom(int iArrA[], int iS)
{
    int iValor;
    // Inicializar la semilla de los valores random
    // Para que cada vez que se ejecute de nuevo genere
    // una secuencia de valores diferentes
    srand(time(NULL));
    
    //inciializar el arreglo con valores que no pueden existir
    
    for (int iR = 0; iR < iS; iR++) {
        iArrA[iR] = 0;
        
    }
    
    for (int iR = 0; iR < iS; iR++) {
        
        //generar un valor aleatorio
        iValor = rand() % 10 + 1; //valores entre 1 -> 10
        
        while (buscaValor(iArrA, iS, iValor)) {
            iValor = rand()%10+1; 
        }
        
    }
    
    
    
    
}
void despliegaArreglo(string sArrA[], int iSize)
{
    
}
//Aqui se ve que el paso de parametro del arreglo
//es por Referencia
void leerArreglo(int iArrA[], int iSize)
{
    for (int iR = 0; iR < iSize; iR++) {
        cout<< "Ingresa el elemento: "<<iR<<endl;
        cin>>iSize;
    }
    
}
//*************
//suma
//Diseña una función llamada suma,
//que retorna la suma de todos los valores
//del arreglo recibido como parámetro de entrada.
//*************
int suma(int iArrA[], int iSize)
{
    //Declaración de variables
    //Inicializar el acumulador de la iAcum=0
    int iAcum = 0;
    
    //Recorrer todos el arreglo para ir
    //sumando uno a uno en iAcum
    for (int iR = 0; iR < iSize; iR++){
        iAcum = iAcum + iArrA [iR];
    }
    
    //Retornar la suma de todos elementos del
    //Arreglo
    return iAcum;
}
//*************
//mayor
//Diseña una función llamada elMayor,
//que retorna el valor mayor del arreglo
//recibido como parámetro de entrada.
//*************
int mayor (int iArrA[], int iS)
{
    //Declaracion de variables
    int iMax;
    
    //Inicializar iMax
    iMax = INT_MIN;
    
    
    for (int iR = 0; iR < iS; iR++) {
        if (iArrA[iR] > iMax)
            iMax = iArrA[iR];
    }
    
    
    //Retornar
    return iMax;
}
//*************
//menor
//Diseña una función llamada elMenor,
//que retorna el valor menor del arreglo
//recibido como parámetro de entrada.
//*************
int menor (int iArrA[], int iS)
{
    int iMin;
    
    //Inicializar iMax
    iMin = INT_MAX;
    
    
    for (int iR = 0; iR < iS; iR++) {
        if (iArrA[iR] > iMin)
            iMin = iArrA[iR];
    }
    
    
    //Retornar
    return iMin;
    
}
//*************
//buscaValor
//Diseña una función llamada buscaValor,
//que devuelve true si el valor recibido
//como parámetro existe dentro del arreglo de enteros,
//también recibido como parámetro y false en caso contrario.
//*************

//*************
//buscaPos
//Diseña una función llamada buscaPos,
//que devuelve la posición dentro del arreglo del valor
//recibido como parámetro, si es que existe, sino, regresa -1.
//*************
int buscaPosicionValor(int iArrA[], int iS, int iValor)
{
    //Recorrer el arreglo si lo encuentra
    // retornar la posición en que se encontro
    //Recorrer todo el arreglo si lo encuentra
    // retornar true
    for (int iR = 0; iR < iS; iR++) {
        if (iArrA[iR] == iValor)
            return iR;
    }
    
    //No lo encontro
    return -1;
}
//*************
//cuentaRepeticiones
//Diseña una función llamada cuentaRepeticiones,
//que devuelve cuántas veces existe dentro del arreglo
//el valor recibido como parámetro.
//*************
int cuentaRepeticiones(int iArrA[], int iS, int iValor)
{
    //Declaracion de variables
    int iCont = 0;
    
    //contar las veces que se repite valor dentro del arreglo
    for (int iR = 0; iR < iS; iR++) {
        if (iArrA[iR] == iValor) {
            iCont = iCont + 1;
        }
    }
    
    
    //Retorna la cantidad de veces que se encontro
    // el valor dentro del arreglo
    return iCont;
}
//*************
//inversa
//Diseña una función llamada inversa,
//que copia el arreglo a en forma inversa al arreglo b,
//regresa true si pudo realizar la copia y false en caso contrario.
//*************
bool copiaInversa( int iArrA[], int iSA, int iArrB[], int iSB)
{
    //No se puede realizar la copia
    if (iSA!=iSB)
        return false;
    
    for(int iR =  0, iR2 = iSA - 1; iR < iSA; iR++, iR2 --) {
        iArrB[iR2] = iArrA[iR];
    }
    //Si son del mismo tamaño
    //copiar de forma inversa el contenido del arreglo iArrA al
    // arreglo iArrB
    
    
    //Si se pudo realizar la copia
    return true;
}
//*************
//copia arreglo
//Diseña una función llamada inversa,
//que copia el arreglo A al arreglo B,
//regresa true si pudo realizar la copia y false en caso contrario.
//*************
bool copiaArreglo( int iArrA[], int iSA, int iArrB[], int iSB)
{
    //No se puede realizar la copia
    if (iSA!=iSB)
        return false;
    //Si son del mismo tamaño
    //copiar el contenido del arreglo iArrA arreglo iArrB
    for (int iR = 0; iR < iSA; iR++) {
        iArrB[iR] = iArrA[iR];
    }
    
    //Si se pudo realizar la copia
    return true;
}
bool iguales(int iArrA[], int iSA, int iArrB[], int iSB)
{
    //Lo primero revisar si tienen el mismo tamaño
    //Si no tienen el mismo tamaño regresar false
    if (iSA != iSB)
        return false;
    //Si si tienen el mismo tamaño revisar ahora elementoXelemento
    //Recorrer todos los elementos del arreglo
    //Si algunos no son iguales termina la comparación
    // y retorna false, indicando que NO fueron iguales
    for (int iR = 0; iR < iSA; iR++) {
        if(iArrA[iR] != iArrA[iR])
            return false;
        
        return true;
    }
    
    //Ya se comprueba que todos
    //los elementos fueron iguales
    return true;
}
//*************
//promedio
//Diseña una función llamada promedio,
//que devuelve el promedio con decimales
//de todos los valores contenidos dentro del arreglo.
//*************
double promedio(int iArrA[], int iSA )
{
    //Declaración de variables
    //Inicializar el acumulador de la iAcum=0
    double dAcum = 0;
    dAcum = suma(iArrA, iSA);
    
    //Recorrer todos el arreglo para ir
    //sumando uno a uno en iAcum
    
    
    //Retornar el promedio de todos los elementos del
    //Arreglo si el tamaño fue >0
    if(iSA >0)
        return dAcum / iSA;
    
    //sino retorna
    return INT_MIN;
}
int main(int argc, const char * argv[])
{
    int iArrA[ ] = { 7, 10, 8, 2, 3, 15, 12, 13, 40, 15};
    int iOpcion, iValor,iPremio, iTotal;
    int iArrB[10];
    int iArrTacos[] = {100, 100, 100};
    int iArrLoteria[54];
    string sArrGuisados[] = {"Barbacoa", "Carnitas", "Don Macizo", "Chicharrón", "Picadillo", "Frijoles con veneno", "Tripas", "Rajas con queso", "Chile Relleno", "Cochinita", "Lechón", "Relleno negro", "Longaniza de valladolid", "Pejelagarto", "Mariscos"};
    //Ciclo centinela con do-while
    do
    {
        iOpcion = menu();
        switch (iOpcion) {
            case 0:
                cout<<"Adios!!!\n";
                break;
            case 1:
                inicializa1(iArrA, 10);
                despliega(iArrA, 10);
                break;
            case 2:
                inicializa2(iArrA, 10);
                despliega(iArrA, 10);
                break;
            case 3:
                inicializa3(iArrA, 10);
                despliega(iArrA, 10);
                break;
            case 4:
                inicializa4(iArrA, 10);
                despliega(iArrA, 10);
                break;
            case 5://Inicializa5
                break;
            case 6://El mayor
                despliega(iArrA, 10);
                cout<<"El mayor="<<mayor(iArrA,10)<<endl;
                break;
            case 7://El menor
                break;
            case 8://Suma
                despliega(iArrA, 10);
                iTotal = suma(iArrA, 10);
                cout<<"Total="<<iTotal<<endl;
                break;
            case 9://Promedio
                break;
            case 10://Busca Valor
                despliega(iArrA, 10);
                //Leer el valor que voy a buscar en
                cout<<"Teclea tu numero de boleto:";
                cin>>iValor;
                //Como llamar???
                if ( buscaValor(iArrA,10,iValor) )
                    cout<<"Tu boleto esta premiado!!\n";
                else
                    cout<<"No esta tu boleto en la lista de los ganadores\n";
                break;
            case 11://Busca valor desde una posicion
                despliega(iArrA, 10);
                //Leer el valor que voy a buscar en
                cout<<"Teclea tu numero de boleto:";
                cin>>iValor;
                //Como llamar???
                if ( buscaValor(iArrA,10,iValor) )
                    cout<<"Tu boleto esta premiado!!\n";
                else
                    cout<<"No esta tu boleto en la lista de los ganadores\n";
                break;
                
            case 12:
                despliega(iArrA, 10);
                //Leer el valor que voy a buscar en
                cout<<"Teclea tu numero de boleto:";
                cin>>iValor;
                //Como llamar???
                iPremio= buscaPosicionValor(iArrA,10,iValor) ;
                if ( iPremio != -1)
                    //Te sacaste un premo
                    cout<<"Tu premio es "<<sArrGuisados[iPremio] <<endl;
                else
                    cout<<"No esta tu boleto en la lista de los ganadores,Adios!\n";
                break;
            case 13://cuienta repeticiones
                cout<<"Ingresa el número a contar\n";
                cin>>iValor;
                iPremio = cuentaRepeticiones(iArrA, 10, iValor);
                cout<<"El valor "<<iValor<<" se repite "<<iPremio<<" veces \n";
                break;
            case 14://Copia arreglo
                //Desplegar arreglos
                cout<<"Arreglo AAAAAA\n\n";
                despliega(iArrA, 10);
                cout<<"Arreglo BBBBBBBB\n";
                despliega(iArrB, 10);
                //if para verificar si se pudo copiar
                if ( copiaArreglo(iArrA, 10, iArrB, 10) )
                {
                    //si se pudo copiar
                    cout<<"Si se pudo copiar!!\n";
                    cout<<"Arreglo BBB Nuevo\n";
                    despliega(iArrB, 10);
                }
                else
                {
                    cout<<"Nooooo se pudo copiar!!\n";
                }
                break;
            case 15:
                //Desplegar arreglos
                cout<<"Arreglo AAAAAA\n\n";
                despliega(iArrA, 10);
                cout<<"Arreglo BBBBBBBB\n";
                despliega(iArrB, 10);
                //if para verificar si se pudo copiar
                if ( copiaInversa(iArrA, 10, iArrB, 10) )
                {
                    //si se pudo copiar
                    cout<<"Si se pudo copiar!!\n";
                    cout<<"Arreglo BBB Nuevo\n";
                    despliega(iArrB, 10);
                }
                else
                {
                    cout<<"Nooooo se pudo copiar!!\n";
                }
                break;
            case 16:
                //Desplegar arreglos
                cout<<"Arreglo AAAAAA\n\n";
                despliega(iArrA, 10);
                cout<<"Arreglo BBBBBBBB\n";
                despliega(iArrB, 10);
                //if para verificar si se pudo copiar
                if ( iguales(iArrA, 10, iArrB, 10))
                {
                    //si se pudo copiar
                    cout<<"Es palíndrome!!\n";

                }
                else
                {
                    cout<<"Nooooo se pudo copiar!!\n";
                }
                break;
                
            case 20:
                despliega(iArrA, 10);
                break;
            case 21:
                despliega(sArrGuisados, 15);
                break;
            case 22:
                leerArreglo(iArrA, 10);
                despliega(iArrA, 10);
                
                break;
            default:
                cout<<"Opción inválida!"<<endl;
                break;
        }
    }while (iOpcion!= 0);
    
    return 0;
}

