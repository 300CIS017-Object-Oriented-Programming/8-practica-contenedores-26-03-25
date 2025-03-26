#include <iostream>
#include "Estudiante.h"

#include <algorithm>

using namespace std;

Estudiante::Estudiante(){
    nombre = "";
    codigo = 0;
}

Estudiante::Estudiante(string nombre, int codigo) : nombre(nombre), codigo(codigo) {}

void Estudiante::consultarTareas(){
    for(const auto& tarea : tareas){
        cout<< "Descripcion: " << tarea->getDescripcion() << " Duracion: "<< tarea->getDuracion()<<" Terminada: "<<tarea->getTerminada() << endl;
    }
}
int Estudiante::tareasPendientes() {
    int total = 0;
    for(const auto& tarea : tareas) {
        if (tarea->getTerminada() == false) {
            total += 1;
        }
    }
    return total;
}

void Estudiante::eliminarTareas() {
    for (auto it = tareas.begin(); it != tareas.end(); it++) {
        if ((*it)->getTerminada()) {
            delete (*it);
            it = tareas.erase(it);
        }
        else {
            ++it;
        }
    }
}

int Estudiante::tiempoTotal() {
    int total = 0;
    for (const auto& tarea : tareas) {
        total+=tarea->getTerminada();
    }
    return total;
}

Tarea *Estudiante::buscarPorDescripcion(string descripcion) {
    Tarea * p = nullptr;
    for (const auto& tarea : tareas) {
        if (tarea->getDescripcion() == descripcion) {
            p = tarea;
        }
    }
    return p;
}

bool Estudiante::comparar(Tarea* tarea1, Tarea* tarea2) {
    return tarea1->getDescripcion() < tarea2->getDescripcion();
}

void Estudiante::ordenarTareas() {
    sort(tareas.begin(), tareas.end(), comparar);
}



