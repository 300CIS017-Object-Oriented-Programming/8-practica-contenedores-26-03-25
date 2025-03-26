#include <iostream>
#include "Tarea.h"


Tarea::Tarea(){
  descripcion = "";
  duracion = 0;
  terminada = false;
}

Tarea::Tarea(string descripcion, int duracion, bool terminada) : descripcion(descripcion), duracion(duracion), terminada(terminada){}

string Tarea::getDescripcion(){
  return descripcion;
}

int Tarea::getDuracion(){
  return duracion;
}

bool Tarea::getTerminada(){
  return terminada;
}

void Tarea::setDescripcion(string descripcion){
  Tarea::descripcion = descripcion;
}

void Tarea::setDuracion(int duracion){
  Tarea::duracion = duracion;
}

void Tarea::setTerminada(bool terminada){
  Tarea::terminada = terminada;
}
