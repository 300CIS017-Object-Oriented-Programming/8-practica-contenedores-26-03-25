#include <iostream>
#include "GestorTareas.h"

GestorTareas::GestorTareas() {

}

GestorTareas::~GestorTareas() {

}

Estudiante* GestorTareas::getEstudiante(int id) {
    auto it = estudiantes.find(id);
    if (it != estudiantes.end()) {
        return it->second;
    }else {
        return nullptr;
    }
}




