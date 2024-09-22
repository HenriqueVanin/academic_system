#include "stdafx.h"
#include "Departamento.h"
#include "Universidade.h"
#include "Disciplina.h"

Departamento::Departamento()
{
    pDiscpPrim = NULL;
    pDiscpAtual = NULL;
}

Departamento::~Departamento()
{
    pDiscpPrim = NULL;
    pDiscpAtual = NULL;
}

void Departamento::setNome (char* n){
    strcpy(nome, n);
}

char* Departamento::getNome (){
    return nome;
}

void Departamento::setUniversidade(Universidade* pu)
{
    pUniv = pu;
}

Universidade* Departamento::getUniversidade()
{
    return pUniv;
}

void Departamento::incluiDisciplina(Disciplina* pd)
{
    if (pDiscpPrim == NULL)
    {
        pDiscpPrim = pd;
        pDiscpAtual = pd;
    }

    else
    {
        pDiscpAtual->pBack = pDiscpAtual;
        pDiscpAtual->pNext = pd;
        pDiscpAtual = pd;
    }
}

void Departamento::listaDisciplinas()
{
    Disciplina* pAux;

    pAux = pDiscpPrim;

    while (pAux != NULL)
    {
        cout << " A disciplina " << pAux->getNome() << " pertence ao Departamento " << nome << endl;

        pAux = pAux->pNext;
    }
}
