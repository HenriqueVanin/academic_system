#pragma once

class Curso
{
private:
    char nome [100];

public:
    Curso ();
    ~Curso ();

    void setNome (char* n);
    char* getNome ();
};
