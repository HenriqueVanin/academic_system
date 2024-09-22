#pragma once
#include <vector>
#include "Departamento.h"
#include "Curso.h"

using namespace std;

class Universidade
{
private:
    char nome [30];
    vector < Departamento* > LpDptos;
    Curso Curso;

public:
    Universidade();
    ~Universidade();
    void setNome (char* n);
    char* getNome ();

    void setDepartamento (Departamento* pdep);
    void printDepartamentos ();
    void setNomeCurso (char* nome_curso);
};
