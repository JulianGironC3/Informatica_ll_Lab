#include <iostream>

using namespace std;

int main()
{
    char n[100];
    int i=0,e, cont;

    cout << "ingrese algo: "<< endl;
    cin >> n;

    while(n[i]!='\0'){
        cont++;
        i++;
    }

    char nn[cont];

    for (int i=0; i<cont; i++){
    if (65 <= n[i] and n[i] <= 90){
        int j=n[i];
        nn[i]=n[i]+32;
        }

    else nn[i]=n[i];

    }
    cout << "En minusculas seria: " << nn << endl;

}
