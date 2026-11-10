#include "Tableau.h"
using namespace std;

Tableau::Tableau(int n)

{

    taille = n;

    tab = new float[taille];

    for (int i = 0; i < taille; i++)

    {

        tab[i] = 0;

    }

}

Tableau::~Tableau()

{

    delete[] tab;

}

Tableau::Tableau(const Tableau& t)

{

    taille = t.taille;

    tab = new float[taille];

    for (int i = 0; i < taille; i++)

    {

        tab[i] = t.tab[i];

    }

}

Tableau& Tableau::operator=(const Tableau& t)

{

    if (this != &t)

    {

        delete[] tab;

        taille = t.taille;

        tab = new float[taille];

        for (int i = 0; i < taille; i++)

        {

            tab[i] = t.tab[i];

        }

    }

    return *this;

}

float& Tableau::operator[](int i) {
return tab[i];
}