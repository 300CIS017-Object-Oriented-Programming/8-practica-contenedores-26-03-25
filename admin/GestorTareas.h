#ifndef GESTORTAREAS_H
#define GESTORTAREAS_H

#include <iostream>
#include <map>
#include "Estudiante.h"

using namespace std;

class GestorTareas {
    private:
      map<int, Estudiante*> estudiantes;
    public:
      GestorTareas();
      ~GestorTareas();
      Estudiante* getEstudiante(int cod);
      void agregarEstudiante(string nom, int cod);
      void eliminarEstudiante(int cod);
      void actualizarEstudiante(string nom, int cod);
};



#endif //GESTORTAREAS_H
