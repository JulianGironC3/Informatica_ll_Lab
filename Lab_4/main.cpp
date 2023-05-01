#include <iostream>
#include <string>
#include "red_de_enrutadores.h"
#include "enrutador.h"

using namespace std;

int main()
{

    red_de_enrutadores internet;
    enrutador A ("A");
    enrutador B ("B");
    enrutador C ("C");
    enrutador D ("D");
    //cout << &A;
    internet.agregar_enrutador(&A);
    internet.agregar_enrutador(&B);
    internet.agregar_enrutador(&C);
    internet.agregar_enrutador(&D);
    internet.agregar_enlace("A","B",4);
    internet.agregar_enlace("B","C",1);
    internet.agregar_enlace("D","C",2);
    internet.agregar_enlace("C","A",10);

    //cout << internet.enrutadores.getenrutadores();


}
