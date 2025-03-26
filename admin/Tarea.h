#include <iostream>
#include <string>

#ifndef TAREA_H
#define TAREA_H


using namespace std;

class Tarea {
    private:
      string descripcion;
      int duracion;
      bool terminada;
    public:
      Tarea();
      Tarea(string descripcion, int duracion, bool terminada);
      string getDescripcion();
      int getDuracion();
      bool getTerminada();
      void setDescripcion(string descripcion);
      void setDuracion(int duracion);
      void setTerminada(bool terminada);
};



#endif //TAREA_H
