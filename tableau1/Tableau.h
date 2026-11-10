#pragma once
class Tableau
{
protected:

    int taille;

    float* tab;

public:

    Tableau(int n);

    ~Tableau();

    Tableau(const Tableau& t);

    Tableau& operator=(const Tableau& t);

    float& operator[](int i);
};

