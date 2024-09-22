#include "stdafx.h"
#include "Professor.h"

Professor::Professor (int diaNa,int mesNa,int anoNa, char* nome):
Pessoa (diaNa, mesNa, anoNa, nome)
{
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

Professor::Professor()
{
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}
Professor::~Professor ()
{
    pUnivFiliado = NULL;
    pDptoFiliado = NULL;
}

void Professor::setUnivFiliado (Universidade* pUniv)
{
    pUnivFiliado = pUniv;
}
void Professor::setDptoFiliado (Departamento* pDpto)
{
    pDptoFiliado = pDpto;
}

void Professor::printUnivFiliado ()
{
    cout << nomeP << " trabalha para a " << pUnivFiliado->getNome() << endl;
}
void Professor::printDptoFiliado ()
{
    cout << nomeP << " trabalha no departamento " << pDptoFiliado->getNome() << " da " << pUnivFiliado->getNome() << endl;
}
