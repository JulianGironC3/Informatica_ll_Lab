#include <iostream>

using namespace std;

int main()
{
    int tri,n,pm,pp,invt=0, inv, inicial, final;
    cout << "Ingrese un numero de 3 digitos maximo: " << endl;
    cin >> n;


    for (int i=100; i<=n; i++){
        invt=i;
        inv=0;

        while(invt>0){

            inv=inv*10 + invt%10;
            invt=invt/10;}

            if (i==inv){
                for (int j=i+1; j<n;j++) {

                invt=j;
                inv=0;
                while(invt>0){

                    inv=inv*10 + invt%10;
                    invt=invt/10;
                    }
                if (j==inv){
                    pp=i*j;
                    invt=pp;
                    inv=0;
                    while(invt>0){

                        inv=inv*10 + invt%10;
                        invt=invt/10;}
                    if(pp==inv and pp>pm) {
                        pm=pp;
                        inicial=i;
                        final=j;
                    }
                }




                }

            }


    }
    cout << inicial << "*"<< final << "="<< pm<< endl;
    return 0;
}
