#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

void saca_a_binario(char t[], int tam);
void codifica_archivo(char t[], int tam, int n);

int main()
{
  int n,op;
  const int tam=256 ;
  char* a;
  char t[tam];
  char tcod[tam];


  cout << "Ingrese un numeros semilla: ";
  cin >> n;

  cout << "¿Que metodo quiere utilizar?: ";
  cin >> op;

  //Primer metodo
  //Usando Char
  saca_a_binario(t,tam); //Funcion convierte texto a binario
  for(int i=0;i<tam;i++) tcod[i]=t[i]; //hace copia

  codifica_archivo(tcod,tam,n);



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

void codifica_archivo(char tcod[], int tam, int n){

   char ttemp[tam], tcon[n];
   int ct=0;

   for(int i=0;i<tam;i++) ttemp[i]=tcod[i]; //hace copia


   //Fallaaaaaaaaaaaaaa
   while(tcod[ct]!='\0'){
       if (tcod[ct]!='1' and tcod[ct]!='0') break;
        int nc=0,nu=0;
       for (int i=0;i<n;i++) {
           tcon[i]=tcod[ct];
           if (tcon[i]=='0') {
               nc++;
               ct++;}
           else if (tcon[i]=='1') {
               nu++;
               ct++;}
           else break;
       }
       //Si hay igual cantidad de 1s y 0s se invierte cada bit del grupo
       if (nc==nu){
            for(int i=0;i<n;i++){
               switch (tcon[i]) {
                case '1': tcon[i]='0';
                   break;
                case '0': tcon[i]='1';
                   break;
                default: //si no hay 1 o 0 es porque se salio del rango de tcon
                   break;
               }
            }
       }

       //si hay mayor cantidad de 0s se invierte cada 2bits
       if (nc>nu){

           for (int i=0;i+1<=n;i+=2) {
               switch (tcon[i+1]) {
                case '1': tcon[i+1]='0';
                   break;
                case '0': tcon[i+1]='1';
                   break;
                default: //si no hay 1 o 0 es porque se salio del rango de tcon
                   break;
               }
           }

       }

       //si hay mayor cantidad de 1s se invierte cada 3bits
       if (nu>nc){
           for (int i=0;i<n;i+=3) {
               switch (tcon[i+2]) {
                case '1': tcon[i+2]='0';
                   break;
                case '0': tcon[i+2]='1';
                   break;
                default: //si no hay 1 o 0 es porque se salio del rango de tcon
                   break;
               }
           }


       }
       //Agrega tcon al char codificado
       for (int i=0;i<n;i++) tcod[(ct-n)+i]=tcon[i];

    }
}
