#include "stdafx.h"
#include "Disciplina.h"

Disciplina::Disciplina(char* ac)
{
    pDptoAssociado = NULL;
    pNext = NULL;
    pBack = NULL;

    strcpy(area, ac);
}

Disciplina::~Disciplina()
{
    pDptoAssociado = NULL;
    pNext = NULL;
    pBack = NULL;
}

void Disciplina::setID (int n)
{
    id = n;
}

int Disciplina::getID()
{
    return id;
}

void Disciplina::setNome(char* n)
{
    strcpy(nome, n);
}

char* Disciplina::getNome()
{
    return nome;
}

void Disciplina::setDepartamento (Departamento* pdpto)
{
    pDptoAssociado = pdpto;

    pdpto->incluiDisciplina(this);
}

Departamento* Disciplina::getDepartamento()
{
    return pDptoAssociado;
}
