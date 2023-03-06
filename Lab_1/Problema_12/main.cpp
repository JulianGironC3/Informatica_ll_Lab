#include <iostream>

using namespace std;

int main()
{
    int n, num, div, primo;
    cout << "Ingrese un numero: " << endl;
    cin >> n;

    for (int i=2;i<=n;i++){
        div=0;
        for (int j=1;j<=i;j++){

        if (i%j==0) div+=1;

        }
        if (div==2) primo = i;
        if (n%primo==0) num= primo;
    }
    cout <<  num << endl;

    return 0;
}
