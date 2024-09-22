#pragma once
#include "Pessoa.h"
#include "Professor.h"
#include "Universidade.h"

class Principal
{
private:

    Universidade UTFPR;
    Universidade Princeton;
    Universidade Cambridge;

    Departamento DAELN;
    Departamento Fisica;
    Departamento Matematica;

    Professor Einstein;
    Professor Newton;
    Professor Simao;

    int diaAt; int mesAt; int anoAt;

public:
    Principal();
    ~Principal();

    void Inicializa();
    void InicializaUniversidades();
    void InicializaDepartamentos();
    void InicializaProfessores();
    void InicializaDisciplinas();

    void Executar ();

    void CalcIdadeProfs();
    void UnivOndeProfsTrabalham();
    void DepOndeProfsTrabalham();
    void ListeDiscDptos();
};
