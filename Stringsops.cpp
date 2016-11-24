
#include <iostream>
#include <stdio.h>

using namespace std;


//** Añadir descripción
void desglozaNombre( )
{
    //Declaración de variables
    string sName, sName2, sApellidoPaterno, sApellidoMaterno;
    int iPos1, iPos2;


    getchar();
    cout <<"Ingresa el nombre: ";
    getline(cin, sName);

    iPos1  =  (int) sName.find(' ');

    sName2 = sName.substr(0, iPos1);

    sName.erase(0, iPos1 + 1);

    iPos1 = (int)sName.find(' ');

    sApellidoPaterno = sName.substr(o, iPos1);

    sName.erase(0, iPos1 + 1);

    sApellidoMaterno = sName;
    
    
    
    
    //Desplegar el nombre por separado
    cout << "Nombre=" << sName <<
    "\nApellido Paterno=" << sApellidoPaterno
    << "\nApellido Materno=" << sApellidoMaterno
    << endl;
    
    
    
}

//** Añadir descripción
bool palindrome (string sFrase)
{
    string sFrase2;
    int iPos, iSize;

    iPos = sFrase.find(' ');
   while (iPos != -1) {
    sFrase.erase(iPos, 1);
    iPos = sFrase.find(' ');
    cout <<iPos<<endl;

   }

    iSize = (int) sFrase .length();

    sFrase2 = sFrase;

    for (int iR = 0, iR2 = iSize -1; iR < iSize; iR++, iR2--) 
        sFrase2[iR2] = sFrase[iR];

    for (int iR = 0, iR2 = iSize -1; iR < iSize; iR++, iR2--) 
        if (sFrase2[iR] != sFrase)
            return false;



    
    
    
    
    //No fue palindrome
    return false;
}

//** Añadir descripción
int  menu()
{
    //Declaración de variables
    int iOpcion;
    cout << "\n1. Desgloza nombre"
    << "\n2. Palindrome"
    << "\n0. Salir"
    << "\nTeclea la opcion:";
    
    cin >> iOpcion;
    
    return iOpcion;
}


//**
int main()
{
    string sFrase;
    int iOpcion;
    
    
    do{
        iOpcion = menu();
        switch (iOpcion) {
            case 0:
                cout << "Gracias por usar el programa\n";
                break;
            case 1:
                desglozaNombre();
                break;
            case 2:
                cout << "Teclea la frase:";
                getline(cin, sFrase);
                //Añade las instrucciones para llamar a la función

                if(palindrome(sFrase))
                    cout << "Si es Palindrome, te ganaste un auto \n"
                else 
                    cout << "No es palíndrome \n";
                
                
                break;
            default:
                cout << "Opcion Incorrecta!!\n";
                break;
        }
        cin.ignore();
        cout << "Teclea <enter> para continuar...";
        getline(cin, sFrase);
        
    }while (iOpcion != 0);
    
    
    
    return 0;
}

