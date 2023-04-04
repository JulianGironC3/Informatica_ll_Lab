#include <iostream>

using namespace std;

int main()
{
    int n, t, div,cont, primo, k, m, kt;
    cout << "Ingresa un numero: " << endl;
    cin >> n;

    while(cont < n){
        t=1;

        for (int i=2;i>t;i++){
            div=0;
            for (int j=1;j<=i;j++){

            if (i%j==0) div+=1;

            }
            if (div==2) cont++;
            primo = i;


            if (cont==n) break;
        }
    }



    k= primo;
    kt=k;
    cont=1;
    cout << k << ": ";
    while (kt!=1){
    if (kt%2==0) {
        kt=kt/2;
        cout << kt << "," ;
        cont++;}
    else if (kt%2==1) {
        kt=3*kt+1;
        cout << kt << ",";
        cont ++;
    }

    }


cout << endl << "El numero primo en la posicion " << n << " es " <<k<<" y genera una serie con "<< cont <<" terminos "<< endl;


    return 0;
}
