#include "stdafx.h"
#include "Principal.h"

Principal::Principal():
Einstein(),
Newton(),
Simao()
{


    cout << " Digite o dia atual : " << endl;
    cin >> diaAt;

    cout << " Digite o mes atual : " << endl;
    cin >> mesAt;

    cout << " Digite o ano atual : " << endl;
    cin >> anoAt;

    Inicializa();
}

Principal::~Principal()
{

}

void Principal::Inicializa()
{
    InicializaUniversidades();
    InicializaDepartamentos();
    InicializaDisciplinas();
    InicializaProfessores();
}

void Principal::InicializaUniversidades()
{
    //Registro dos nomes das Universidades
    UTFPR.setNome("UTFPR");
    Princeton.setNome("Princeton");
    Cambridge.setNome("Cambridge");
}

void Principal::InicializaDepartamentos()
{
  //Registro dos nomes dos Departamentos
    DAELN.setNome("Eletronica");
    Fisica.setNome("Fisica");
    Matematica.setNome("Matematica");

    //"Agregação" dos Deparamentos às Universidades
    UTFPR.setDepartamento(&DAELN);
    Princeton.setDepartamento(&Fisica);
    Cambridge.setDepartamento(&Matematica);
}

void Principal::InicializaProfessores()
{
    Einstein.inicializa(14,3,1879, "Albert Einstein");
    Newton.inicializa(4,1,1643, "Isaac Newton");
    Simao.inicializa( 3,10,1976, "Jean Simao" );

        //"Filiação" à universidade
    Einstein.setUnivFiliado(&Cambridge);
    Newton.setUnivFiliado(&Princeton);
    Simao.setUnivFiliado(&UTFPR);

    //"Filiação" ao departamento
    Einstein.setDptoFiliado(&Matematica);
    Newton.setDptoFiliado(&Fisica);
    Simao.setDptoFiliado(&DAELN);

    //Universidade que o Professor trabalha
    Simao.printDptoFiliado();
    Newton.printDptoFiliado();
    Einstein.printDptoFiliado();
}

void Principal::CalcIdadeProfs()
{
    //Cálculo da idade
    Einstein.calcIdade(diaAt, mesAt, anoAt);
    Newton.calcIdade(diaAt, mesAt, anoAt);
    Simao.calcIdade(diaAt, mesAt, anoAt);
    printf ("\n");
}

void Principal::DepOndeProfsTrabalham()
{
    Simao.printDptoFiliado();
    Einstein.printDptoFiliado();
    Newton.printDptoFiliado();
    printf ("\n");
}

void Principal::UnivOndeProfsTrabalham()
{
    Simao.printUnivFiliado();
    Einstein.printUnivFiliado();
    Newton.printUnivFiliado();
    printf ("\n");
}

void Principal::Executar()
{
    CalcIdadeProfs();
    UnivOndeProfsTrabalham();
    DepOndeProfsTrabalham();
    ListaDepUniv();
    ListaDiscDptos();
}
