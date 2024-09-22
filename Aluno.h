#pragma once

#include "Pessoa.h"
#include "Universidade.h"

class Aluno : public Pessoa
{
private:
    int RA;
    Universidade* pUniversidade;
    Curso* pCurso;

public:
    Aluno (int diaNa, int mesNa, int anoNa, char* nome);
    Aluno (int i = -1);
    ~Aluno ();

    void setRA (int ra);
    int getRA ();

    void setUniversidade (Universidade* pUniv);
    void setCurso (Curso* pCurso);
};
