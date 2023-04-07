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
    char t[256],letra;
    int decimal, residuo,cociente, binario,i,j=0;
    ifstream texto;
    texto.open("Archivo.txt");

    //comprobamos que este abierto
    if(texto.is_open()) cout<< "Archivo abierto"<< endl;
    else cout << "Archivo no abierto."<<endl;

    while(texto.good()){ // si no ha llegado al final del archivo lee por letra
        letra=texto.get();
        binario=0;
        decimal=letra;
        cociente=decimal;
        i=1;

        while(cociente !=0){//Convierte binario
            if (letra=='\n') break;
            residuo=cociente %2;
            cociente=cociente/2;
            binario=binario + residuo*i;
            i=i*10;


            switch(residuo){
            case 1: t[j]='1';
                break;
            case 0: t[j]='0';
                break;
            }
            j++;
        }

        //if ()

    }







}
