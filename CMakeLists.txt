cmake_minimum_required(VERSION 3.30)
project(8_practica_contenedores_26_03_25)

set(CMAKE_CXX_STANDARD 14)

include_directories(admin)

add_executable(8_practica_contenedores_26_03_25
    admin/Estudiante.cpp
    admin/Estudiante.h
    admin/GestorTareas.cpp
    admin/GestorTareas.h
    admin/main.cpp
    admin/Tarea.cpp
    admin/Tarea.h)
