#include <iostream>

using namespace std;

int main()
{
    char b;
    cout << "Ingrese una letra: ";
    cin >> b;
    if (( b > 'A' &&  b<'Z') || ( b > 'a' && b < 'z')){


        if(b=='a' or b== 'e' or b=='i' or b=='o' or b=='u' or b=='A' or b== 'E' or b=='I' or b=='O' or b=='U' ){
        cout<< b<< " es una vocal." << endl;

        }
        else cout << b<< " es consonante"<< endl;


    }
    else {
        cout << b << " no es una letra"<<endl; }
}
