#include <iostream>

using namespace std;

int main()
{
    char Array[200];
    cout << "Arreglo = [";

    for (int i=0; i<size(Array); i++){

        Array[i]= 65+rand()%25;
       cout << Array[i];
       if (i<size(Array)-1) cout << ",";
    }
    cout << "]." << endl;

}

