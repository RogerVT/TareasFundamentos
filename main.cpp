

#include <iostream>
using namespace std;

bool r
{
    return iValue % 2 == 0;
}

int main( ) {
    // Declaración de variables
    int iMatricula;
    
    //Leer matricula
    cout << "Teclea tu matricula:";
    cin >> iMatricula;
    
    //Se usa la función Par
    //Determinar si es par o impar usando la función
    if  ( par(iMatricula) ){ //LA CONDICION NUNCA, NUNCA, NUNCA, LLEVA ;
        cout << iMatricula << " Es Par\n";
    else
            cout << iMatricula << " Es Impar\n";
    
    
    //Si usar la función Par
    //Determinar si es par o impar
    if (iMatricula % 2 == 0)  //LA CONDICION NUNCA, NUNCA, NUNCA, LLEVA ;
        cout << iMatricula << " Es Par\n";
    else
        cout << iMatricula << " Es Impar\n";
 
    return 0;
}
