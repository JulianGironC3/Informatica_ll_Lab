#ifndef RED_DE_ENRUTADORES_H
#define RED_DE_ENRUTADORES_H
#include "enrutador.h"
#include <string>
#include <vector>
#include <map>
#include <fstream>
using namespace std;

class red_de_enrutadores
{

private:

    map <string, enrutador*> enrutadores; // Asocia el id de cada vector a su puntero correspondiente

public:
    red_de_enrutadores();
    void agregar_enrutador(enrutador* enrutador);
    void remover_enrutador(string idenrutador);
    void agregar_enlace(string idenritador1, string idenrutador2, int costo);
    void remover_enlace(string idenritador1, string idenrutador2);
    int getcosto(string idenrutador1, string idenrutador2);
    vector <string> encontrar_camino(string idenrutador1, string idenrutador2);
};

#endif // RED_DE_ENRUTADORES_H
