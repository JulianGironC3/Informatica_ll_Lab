#include <iostream>

using namespace std;

int main()
{
    int c=0, n=0, cm=50000, vm=20000, dm=10000, ccm=5000, d=2000, di=1000, qp=500, dp=200, cp=100, cc=50  ;
    cout << "Ingrese una cantidad" << endl;
    cin >> n;

    c=n/cm;
    cout << "50000: " << c << endl;
    n=n%cm;

    c=n/vm;
    cout << "20000: " << c << endl;
    n=n%vm;

    c=n/dm;
    cout << "10000: " << c << endl;
    n=n%dm;

    c=n/ccm;
    cout << "5000: " << c << endl;
    n=n%ccm;

    c=n/d;
    cout << "2000: " << c << endl;
    n=n%d;

    c=n/di;
    cout << "1000: " << c << endl;
    n=n%di;

    c=n/qp;
    cout << "500: " << c << endl;
    n=n%qp;

    c=n/dp;
    cout << "200: " << c << endl;
    n=n%dp;

    c=n/cp;
    cout << "100: " << c << endl;
    n=n%cp;

    c=n/cc;
    cout << "50: " << c << endl;
    n=n%cc;

    cout << "Faltante: " << n << endl;


    return 0;
}
