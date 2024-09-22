#include "stdafx.h"
#include "Universidade.h"

Universidade::Universidade()
{
    strcpy (nome, "");
}
Universidade::~Universidade()
{

}

void Universidade::setNome (char* n)
{
    strcpy (nome, n);
}
char* Universidade::getNome ()
{
    return nome;
}

void Universidade::setDepartamento (Departamento* pdep)
{
    LpDptos.push_back(pdep);
}

void Universidade::printDepartamentos ()
{
    int tam = (int) LpDptos.size();
    for (int i = 0 ; i < tam ; i++)
        cout << (LpDptos[i])->getNome() << endl;
}

void Universidade::setNomeCurso (char* nome_curso)
{
    Curso.setNome(nome_curso);
}
