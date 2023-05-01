#ifndef ENRUTADOR_H
#define ENRUTADOR_H
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <map>
#include <fstream>
using namespace std;


class enrutador
{

private:
    string id;
    map <string ,int> enlaces;


public:
    enrutador(string id);
    void agregar_enlace(string enlace, int costo);
    void remover_enlace(string enlace);
    string get_id();

};

#endif // ENRUTADOR_H
