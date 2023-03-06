#include <iostream>

using namespace std;

int main()
{
    int a, b,c, sm=0, ma=0,mb=0;
    cout << "Ingrese un primer numero: " << endl;
    cin >> a;

    cout << "Ingrese un segundo numero: " << endl;
    cin >> b;

    cout << "Ingrese un tercer numero: " << endl;
    cin >> c;

    for (int i=1; i<c; i++){
        ma= i%a;
        mb= i%b;

        if (i%a==0 or i%b==0){

        sm+=i;
        cout<< i  ;
        if (i!=c-1) cout << '+';

        }
    }
    cout << "=" << sm << endl;


    return 0;
}
