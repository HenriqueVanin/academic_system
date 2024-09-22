#pragma once

class Universidade;
class Disciplina;

class Departamento
{
private:
    char nome [100];

    Universidade* pUniv;

    Disciplina* pDiscpPrim;
    Disciplina* pDiscpAtual;

public:
    Departamento();
    ~Departamento();

    void setNome (char* n);
    char* getNome ();

    void setUniversidade (Universidade* pu);
    Universidade* getUniversidade ();

    void incluiDisciplina (Disciplina* pd);
    void listaDisciplinas ();
};
