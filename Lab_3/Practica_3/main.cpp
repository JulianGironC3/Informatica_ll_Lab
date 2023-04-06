#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void lectura();


int main()
{
  int n,op;


  cout << "Ingrese un numeros semilla: ";
  cin >> n;

  cout << "¿Que metodo quiere utilizar?: ";
  cin >> op;

  //Primer metodo
  //Usando Char
   lectura();

}


void lectura(){
    char t[256];
    ifstream texto;
    texto.open("Archivo.txt");

    //comprobamos que este abierto
    if(texto.is_open()) cout<< "Archivo abierto"<< endl;
    else cout << "Archivo no abierto."<<endl;

    while(texto.good()){ // si no ha llegado al final del archivo
        texto.getline(t,256);

    }







}
