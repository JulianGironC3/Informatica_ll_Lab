#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void saca_a_binario(char t[], int tam);
void codifica_archivo(char t[], int tam);

int main()
{
  int n,op;
  const int tam=256 ;
  char* a;
  char t[tam];


  cout << "Ingrese un numeros semilla: ";
  cin >> n;

  cout << "¿Que metodo quiere utilizar?: ";
  cin >> op;

  //Primer metodo
  //Usando Char
  saca_a_binario(t,tam); //Funcion convierte texto a binario

  codifica_archivo(t,tam,n);



}

void saca_a_binario(char t[], int tam){

    char letra,ttemp[10];
    int decimal, residuo,cociente, binario,i,j=0;
    ifstream texto;
    texto.open("Archivo.txt");

    //comprobamos que este abierto
    if(texto.is_open()) cout<< "Archivo abierto"<< endl;
    else cout << "Archivo no abierto."<<endl;


    int ni=0;//contador para unir binarios en t
    while(texto.good()){ // si no ha llegado al final del archivo lee por letra
        //invertir(t);
        letra=texto.get();
        if (texto.eof()) break;

        if (letra=='\n') letra=texto.get();
        binario=0;
        decimal=letra;
        cociente=decimal;
        i=1;
        j=0;

        while(cociente !=0){//Convierte binario
            if (letra=='\n') break;
            residuo=cociente %2;
            cociente=cociente/2;
            binario=binario + residuo*i;
            i=i*10;

            switch(residuo){
            case 1: ttemp[j]='1';
                break;
            case 0: ttemp[j]='0';
                break;
            }
            j++;

        }


        int con=j;


        while(con!=0){
         con--;
         t[ni]=ttemp[con]; // paso que invierte binario y lo agrega como debe ser
         ni++;
        }

    }
    //a=t;
    texto.close();

}

void codifica_archivo(char t[], int tam, int n){




}
