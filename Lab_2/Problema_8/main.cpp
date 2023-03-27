#include <iostream>

using namespace std;

int main()
{
    char n[90];
    cout << "Ingrese algo: " << endl;
    cin >> n;
    char *n1 =n;
    int i=0,cn=0,cl=0, j=0, k=0;
    while (n[i]!= '\0'){

        if (n[i]<57 and n[i]>48){

            i++;
            cn++;
        }
        else { i++; cl++;}
    }
    char nn[cn];
    char nl[cl];
    i=0;

    while (n[i]!= '\0'){

        if (n[i]<57 and n[i]>48){

            nn[j]=n[i];
            j++;
            i++;
        }

        else {
            nl[k]=n[i];
            k++;
            i++;
        }
    }


    cout << "Texto: " << nl <<endl ;
    cout << "numero: "<< nn<< endl ; //porque se imprimen mas cosas? se perfecciona con un for.


    return 0;
}
