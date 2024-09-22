#include "stdafx.h"

#include "Curso.h"

Curso::Curso()
{
    strcpy(nome,"");
}
Curso::~Curso ()
{

}

void Curso::setNome (char* n)
{
    strcpy(nome, n);
}
char* Curso::getNome ()
{
    return nome;
}
