#include "red_de_enrutadores.h"
#include "enrutador.h"
#include <string>
#include <vector>
#include <map>
#include <fstream>

red_de_enrutadores::red_de_enrutadores()
{

}

void red_de_enrutadores::agregar_enrutador(enrutador *enrutador)
{
    enrutadores[enrutador->get_id()] = enrutador;
    //enrutadores.insert(std::make_pair(enrutador,enrutador->get_id()));
}

void red_de_enrutadores::remover_enrutador(string idenrutador)
{
    for (auto& enrutador: enrutadores){ // un iterador que recorre enrutadores
        enrutador.second->remover_enlace(idenrutador); // remueve los enlaces que tenga de cada enrutador
    }
    enrutadores.erase(idenrutador); // elimina enrutador del vector
}
void red_de_enrutadores::agregar_enlace(string idenrutador1, string idenrutador2, int costo)
{
    enrutadores[idenrutador1]->agregar_enlace(idenrutador2, costo);
    enrutadores[idenrutador2]->agregar_enlace(idenrutador1,costo);

}

void red_de_enrutadores::remover_enlace(string idenrutador1, string idenrutador2)
{
    enrutadores[idenrutador1]->remover_enlace(idenrutador2);
    enrutadores[idenrutador2]->remover_enlace(idenrutador1);
}

int red_de_enrutadores::getcosto(string idenrutador1, string idenrutador2)
{
    //vector <string> path = encontrar_camino(string idenrutador1, string idenrutador2);

}

vector<string> red_de_enrutadores::encontrar_camino(string idenrutador1, string idenrutador2)
{

}


