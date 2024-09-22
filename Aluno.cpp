#include "Aluno.h"

Aluno::Aluno (int diaNa, int mesNa, int anoNa, char* nome):
Pessoa(diaNa, mesNa, anoNa, nome)
{

}
Aluno::Aluno (int i)
{

}

Aluno::~Aluno ()
{

}

void Aluno::setRA (int ra)
{
    RA = ra;
}

int Aluno::getRA ()
{
    return RA;
}

void Aluno::setUniversidade (Universidade* pUniv)
{

}

void Aluno::setCurso (Curso* pCurso)
{

}

