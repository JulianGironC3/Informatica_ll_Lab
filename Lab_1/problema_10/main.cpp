#include <iostream>

using namespace std;

int main()
{
    int n, cont=0, div=0, j=0, t, primo;
    cout << "Ingrese un numero: " << endl;
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
    cout << "El primo numero "<<  n<< " es "<< primo<< endl;


    return 0;
}
