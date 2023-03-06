#include <iostream>

using namespace std;

int main()
{
    int s=0, e1=0, he1=0, me1=0, e2=0, he2=0, me2=0, hf=0, mf=0;

    while (true){
        cout << "INGRESE UN ENTERO: " << endl;
        cin >> e1;


        he1=e1/100;
        me1=e1%100;
        if (he1 >24 or me1 >=60){
            cout << e1 << " no es un tiempo invalido." << endl;
        }
        else break;


    }
    while(true){
        cout << "INGRESE UN SEGUNDO ENTERO: " << endl;
        cin >> e2;

        he2=e2/100;
        me2=e2%100;
        if (he2 >24 or me2 >=60){
            cout << e2 << " no es un tiempo invalido." << endl;
        }
        else break;}

   hf=he1+he2;
   mf= me1+ me2;

   s=((hf+(mf/60))*100)+(mf%60);

   cout << "La hora es: " << s << endl;



    return 0;
}
