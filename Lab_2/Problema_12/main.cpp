#include <iostream>

using namespace std;

int main()
{
    int n,i1,sf=0, sc=0, sd=0, st=0;
    int *p;

    cout << "Ingrese la dimension del cuadro magico: " << endl;
    cin >> n;

    int c[n][n];
    i1=-1;
    cout << "Ingrese los valores del cuadro:  " << endl;

    for (int i=0; i<n;i++){
        for (int j=0; j<n ;j++){
            cin >> c[i][j];

        }
    }
    while (true) {

    for (int i=0; i<n;i++){ //verifica filas
        sf=0;
        for (int j=0; j<n ;j++){
            sf+=c[i][j];

        }
        st=sf;
        if (sf!=st){
            cout<< "No es cuadrado magico."<< endl;
            break;}

    }

    for (int i=0; i<n;i++){ //verifica columnas
        sf=0;
        for (int j=0; j<n ;j++){
            sc+=c[j][i];

        }
        if (sc!=st){
            cout<< "No es cuadrado magico."<< endl;
            break;}


    }
    for (int i=0; i<n;i++){ //verifica diagonal

            sd += c[i][n - i - 1];
        }

        if (sc!=st){
            cout<< "No es cuadrado magico."<< endl;
            break;}

     }


    for (int i=0; i<n ; i++) cout << " --- ";
    cout << endl;

    for (int i=0; i<n ; i++){//imprime filas
     cout << "|";

        for (int j=0; j<n ; j++) cout << " "<< c[i][j]<< " | ";
    cout << endl;

    for (int i=0; i<n ; i++) cout << " --- ";
    cout << endl;
    }



    return 0;
}
