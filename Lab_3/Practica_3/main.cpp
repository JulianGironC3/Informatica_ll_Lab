#include <iostream>
#include <fstream>
#include <sstream>
#include <string.h>

using namespace std;
//Variables globales
const int tam=256 ;
char* a;
char t[tam]; //Archivo binario
char tcod1[tam]; //Binario codificado 1
char tcod2[tam]; //Binario codificado 2



void saca_a_binario(char t[], int tam, int n);
void primer_metodo(char tcod1[], int tam, int n);
void segundo_metodo(char tcod2[], int tam, int n);
void codifica_archivo(char t[], int tam, int n);
void metodos_de_codificacion_archivo(char t[], int tam, int n);
void escribir_texto_codificado(char tcod[],int tam);
void Decodifica_texto(char tcod[],int op,int n);
void Aplicacion();

int main()
{
    //string nombre;
    //getline(cin,nombre);
    //archivo.open(nombre.c_str());
    char tcod[tam],treal[256]; //Binario Codificado segun el metodo
    int n,op;
    char r;

    cout << "Ingrese un numeros semilla: ";
    cin >> n;

    //Primer metodo
    //Usando Char
    saca_a_binario(t,tam,n); //Funcion convierte texto a binario
    for(int i=0;i<tam;i++){
        treal[i]=t[i]; //hace copia
        cout << treal[i];}

    for(int i=0;i<tam;i++) {
        tcod1[i]=t[i];
        tcod2[i]=t[i];
    } //hace copia


    codifica_archivo(tcod1,tam,n); //metodo1
    segundo_metodo(tcod2, tam, n); //metodo 2

    cout << "¿Que metodo quiere utilizar?1/2: ";
    cin >> op;

    if (op==1){
        for(int i=0;i<tam;i++){ tcod[i]=tcod1[i];
        cout << tcod[i];}
    }
    else if (op==2){
        for(int i=0;i<tam;i++){

            tcod[i]=tcod2[i];
        }
    }
    escribir_texto_codificado(tcod,tam);


//-----------------------------------------------------------

    cout << "Desea decodificar?S/N: ";
    cin >> r;
    if (r=='S' or r=='s') Decodifica_texto(tcod,op,n);


    //
    Aplicacion();


    //metodos_de_codificacion_archivo(t,tam,n);


}

void saca_a_binario(char t[], int tam, int n){

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

void primer_metodo(char t[], int tam, int n){


}

void segundo_metodo(char tcod2[], int tam, int n){

    char ttemp[n], tcon[n];
    int ct=0;

    while(tcod2[ct]!='\0'){
        if (tcod2[ct]!='1' and tcod2[ct]!='0') break;

        for (int i=0;i<n;i++) {
            tcon[i]=tcod2[ct];
            ttemp[i]=tcon[i];
            ct++;
        }

            for (int i=1;i<n;i++) {
                ttemp[i]=tcon[i-1];
            }
            ttemp[0]=tcon[n-1];

            for (int i=0;i<n;i++) tcod2[(ct-n)+i]=ttemp[i];
    }
}

void codifica_archivo(char tcod1[], int tam, int n){

   char ttemp[tam], tcon[n];
   int ct=0;

   for(int i=0;i<tam;i++) ttemp[i]=tcod1[i]; //hace copia


   while(tcod1[ct]!='\0'){
       if (tcod1[ct]!='1' and tcod1[ct]!='0') break;
       int nc=0,nu=0;
       for (int i=0;i<n;i++) {
           tcon[i]=tcod1[ct];
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
       if (nu>nc){ //Falta arreglar
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
       for (int i=0;i<n;i++) tcod1[(ct-n)+i]=tcon[i];

        }
}

void metodos_de_codificacion_archivo(char t[], int tam, int n){



}

void escribir_texto_codificado(char tcod[],int tam){
    ofstream archivo;
    archivo.open("Archivo_Codificado.txt");
    if (archivo.fail()) cout << "No se puede abrir el archivo";

    for (int i=0;i<tam;i++){
        if (tcod[i]=='0' or tcod[i]=='1'){
            archivo<< tcod[i];
        }
    }


}

void Decodifica_texto(char tcod[],int op,int n){
    char ttcon[n],tdcod[256],treal[256];
    int ct=0;

    for(int i=0;i<tam;i++) treal[i]=t[i];

    if(op==1){
        while(tcod[ct]!='\0'){
            if (tcod[ct]!='1' and tcod[ct]!='0') break;

            int nc=0,nu=0;
            for (int i=0;i<n;i++) {
                ttcon[i]=tcod[ct];
                if (ttcon[i]=='0') {
                    nc++;
                    ct++;}
                else if (ttcon[i]=='1') {
                    nu++;
                    ct++;}
                else break;
            }
            //Si hay igual cantidad de 1s y 0s se invierte cada bit del grupo
            if (nc==nu){
                 for(int i=0;i<n;i++){
                    switch (ttcon[i]) {
                     case '1': ttcon[i]='0';
                        break;
                     case '0': ttcon[i]='1';
                        break;
                     default: //si no hay 1 o 0 es porque se salio del rango de tcon
                        break;
                    }
                 }
            }

            //si hay mayor(menor) cantidad de 0s se invierte cada 2bits
            if (nc<nu){

                for (int i=0;i+1<=n;i+=2) {
                    switch (ttcon[i+1]) {
                     case '1': ttcon[i+1]='0';
                        break;
                     case '0': ttcon[i+1]='1';
                        break;
                     default: //si no hay 1 o 0 es porque se salio del rango de tcon
                        break;
                    }
                }

            }

            //si hay mayor (menor) cantidad de 1s se invierte cada 3bits
            if (nu<nc){
                for (int i=0;i<n;i+=3) {
                    switch (ttcon[i+2]) {
                     case '1': ttcon[i+2]='0';
                        break;
                     case '0': ttcon[i+2]='1';
                        break;
                     default: //si no hay 1 o 0 es porque se salio del rango de tcon
                        break;
                    }
                }


            }
            //Agrega tcon al char codificado
            for (int i=0;i<n;i++){
                tdcod[(ct-n)+i]=ttcon[i];
                cout<< ttcon[i];}

             }

    }
    else if (op==2){
        char ttemp[n], tcon[n];
        int ct=0;

        for (int i=0;i<tam;i++) cout << tcod[i];

        while(tcod[ct]!='\0'){
            if (tcod[ct]!='1' and tcod[ct]!='0') break;

            for (int i=0;i<n;i++) {
                tcon[i]=tcod[ct];
                ttemp[i]=tcon[i];
                ct++;
            }

                for (int i=0;i<n-1;i++) {
                    ttemp[i]=tcon[i+1];
                }
                ttemp[n-1]=tcon[0];

                for (int i=0;i<n;i++){

                    tdcod[(ct-n)+i]=ttemp[i];
                cout << tdcod[ct-n+i];
                }
        }
    }
}

void Aplicacion(){

    char nombre_archivo[10];
    cout<< "Accediendo como usuario administrador...";
    cin;


    cout << "ingrese el nombre del archivo: ";
    cin.getline(nombre_archivo,10,'\n');


}
