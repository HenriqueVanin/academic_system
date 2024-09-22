#pragma once

class Pessoa
{
protected:
    int diaP; int mesP; int anoP; int idadeP;
    char nomeP[30];

public:
    Pessoa (int diaNa, int mesNa, int anoNa, char* nome);
    Pessoa ();
    ~Pessoa() {}
    void inicializa (int diaNa, int mesNa, int anoNa, char* nome);
    void calcIdade (int diaAt, int mesAt, int anoAt);
    int getIdade ();
};
