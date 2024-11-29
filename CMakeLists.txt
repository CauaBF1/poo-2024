cmake_minimum_required(VERSION 3.29)
project(poo)

set(CMAKE_CXX_STANDARD 14)

include_directories(aula1)
include_directories(aula2)
include_directories(aula3)

add_executable(aula1
    aula1/horario.h
    aula1/livros.h
    aula1/main.cpp)

add_executable(aula2
        aula2/main.cpp
        aula2/vetorD.h)

add_executable(aula3
        aula3/main.cpp
        aula3/alunos.h)