#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include <iostream>
#include <string>
#include <vector>
#include "Tarea.h"

using namespace std;

class Estudiante {
private:
    string nombre;
    int codigo;
    vector<Tarea *> tareas;
    public:
        Estudiante();
        Estudiante(string nombre, int codigo);
        string getNombre();
        int getCodigo();
        void consultarTareas();
        int tareasPendientes();
        void eliminarTareas();
        int tiempoTotal();
        Tarea * buscarPorDescripcion(string descripcion);
        void ordenarTareas();
        bool comparar(Tarea* tarea1, Tarea* tarea2);
};



#endif //ESTUDIANTE_H
