#include "enrutador.h"

enrutador::enrutador(string id)
{
    id=id;
}

void enrutador::agregar_enlace(string idenlace, int costo)
{
    enlaces[idenlace]=costo; //agrego un enlace del router A a un router B
}

void enrutador::remover_enlace(string idenlace)
{
    enlaces.erase(idenlace);
}

string enrutador::get_id()
{
    return id;
}


