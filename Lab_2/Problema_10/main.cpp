#include <iostream>

using namespace std;

int main()
{
    char  n[90];
    int nn[90];
    int j=0, k=0, i ,m , d ,c ,l ,x ,v;
    cout << "Ingrese un numero romano: " << endl;
    cin >> n;

    while (n[j]!= '\0'){

    switch (n[j]) {  //Solo asignacion

    case 'M':
        m=1000;
        nn[j]=m;
        j++;

        break;

    case 'D':
        d=500;
        nn[j]=d;
        j++;

        break;
    case 'C':
        c=100;
        nn[j]=c;
        j++;

        break;
    case 'L':
        l=50;
        nn[j]=l;
        j++;

        break;

    case 'X':
        x=10;
        nn[j]=x;
        j++;

        break;

    case 'V':
        v=5;
        nn[j]=v;
        j++;

        break;

    case 'I':
        i=1;
        nn[j]=i;
        j++;

        break;

    case'm':
        m=1000;
        nn[j]=m;
        j++;

        break;

    case 'd':
        d=500;
        nn[j]=d;
        j++;

        break;
    case 'c':
        c=100;
        nn[j]=c;
        j++;

        break;
    case 'l':
        l=50;
        nn[j]=l;
        j++;

        break;

    case 'x':
        x=10;
        nn[j]=x;
        j++;

        break;

    case 'v':
        v=5;
        nn[j]=v;
        j++;

        break;

    case 'i':
        i=1;
        nn[j]=i;
        j++;

        break;

    default: cout << "No es un numero romano."<< endl;
        break;
    }

    }

     int nn1[j];
     for (int q=0; q<j; q++) nn1[q]=nn[q];
    /*
    for (int q=0; q<=j ;j++){

        nn[q]=

    }

    int nr=n[k];
    int k=1;*/
    int nr=0,k1;
    int s=0;
    for (int k=0; k<j-1;k++){
        k1 =k;
        if (nn1[k+1]<= nn[k]) nr+=nn1[k];

        else if (nn1[k+1] > nn[k]) nr-=nn1[k];
    }

    //Para el ultimo numero k1 pasa a ser el siguiente numero
    if (nn1[k1+1]<= nn1[k1]) nr+=nn[k1+1];

    else if (nn1[k1+1] > nn1[k1]) nr-=nn[k1+1]; //problema con la operacion ya que en el ejemplo clxxiv i es menos que v pero no es la operacion correcta


    if (nr<0) nr*=-1;

    char* N;
    N=n;

    cout << "El numero ingresado fue: " << N << endl;
    cout << "Que corresponde a: " <<nr<< endl << endl;

    return 0;
}
