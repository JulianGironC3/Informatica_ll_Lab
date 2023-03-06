#include <iostream>

using namespace std;

int main()
{
    float n=0, e=0, f=1, d=0;// e intencionalmente es 1 para cumplir con factorial de 0=1
    cout << "ingrese un numero para e: " << endl;
    cin >> n;

    for (int i=1;i<=n;i++){
        f=1;
        for (int j=1; j<i;j++){
            f*=j;
        }

        e+=(1/f);
    }
    cout << "e es aproximadamente: "<< e<< endl;

}
