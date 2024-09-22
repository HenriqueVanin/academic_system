#pragma once
#include "Aluno.h"
#include "Departamento.h"

class Disciplina
{
private:
    int id;
    char nome[150];
    char area[150];

    Departamento* pDptoAssociado;

public:
    Disciplina(char* ac);
    ~Disciplina();

    Disciplina* pNext;
    Disciplina* pBack;

    void setID (int n);
    int getID ();

    void setNome (char* n);
    char* getNome ();

    void setDepartamento (Departamento* pdpto);
    Departamento* getDepartamento();
};
