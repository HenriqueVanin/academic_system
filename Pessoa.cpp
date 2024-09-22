#include "stdafx.h"
#include "Pessoa.h"

Pessoa::Pessoa (int diaNa, int mesNa, int anoNa, char* nome ="")
{
    inicializa(diaNa, mesNa, anoNa, nome);
}

Pessoa::Pessoa()
{
    inicializa(0,0,0,"");
}

void Pessoa::inicializa(int diaNa, int mesNa, int anoNa, char* nome = "")
{
    diaP = diaNa;
    mesP = mesNa;
    anoP = anoNa;
    strcpy(nomeP , nome);
    idadeP = -1;
}


void Pessoa::calcIdade(int diaAt, int mesAt, int anoAt)
{
    idadeP = anoAt - anoP;
    if (mesP < mesAt)
        idadeP = idadeP--;
    else
    {
        if (mesP == mesAt)
            if (diaP < diaAt)
                idadeP = idadeP--;
    }
}

int Pessoa::getIdade()
{
    return idadeP;
}
