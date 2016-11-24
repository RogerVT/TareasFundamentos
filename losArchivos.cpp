//
//  main.cpp
//  Archivos


#include <iostream>
#include <fstream> //1er paso hacer este include
using namespace std;

int main()
{
    ofstream archivoSalida; //2o Declarar una variable del tipo archivo de salida
    ifstream archivoEntrada;//2o Declarar la variable tipo archivo de entrada
    
    string sNombre, sCarrera, sEdad;
    
    //lee del teclado y lo manda grabar al archivo
    archivoSalida.open("Fundamentos2.txt");// 3o Abrir el archivo
    for (int iK = 1; iK <= 5; iK++)
    {
        cout<<"Teclea tu nombre:";
        getline(cin, sNombre);
        cout<<"Teclea tu carrera:";
        getline(cin, sCarrera);
        cout<<"Teclea tu edad:";
        getline(cin, sEdad);
        archivoSalida << iK << "-" << sNombre << "-" <<  sCarrera << "-" << sEdad << endl;
    }
    archivoSalida.close();
    
    
    //lee linea por linea del archivo y lo despliega en pantalla
    archivoEntrada.open("Fundamentos2.txt");
    
    if ( archivoEntrada.fail() ) //fail return true si No EXISTE EL ARCHIVO
        cout << "El archivo no existe" << endl;
    else
        
        // Ciclo que termina cuando se detecta el final del archivo.
        while ( ! archivoEntrada.eof() )    // eof = end of file.
        {
            getline(archivoEntrada, sNombre);   // Lee un caracter del archivo.
            cout << sNombre << endl;
        }
    
    archivoEntrada.close();
    
    return 0;
}

