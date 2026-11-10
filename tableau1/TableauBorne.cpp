#include "TableauBorne.h"
#include"Tableau.h"
using namespace std;


#include <cstdlib>

TableauBorne::TableauBorne(int n, float a, float b)

    : Tableau(n)

{

    min = a;

    max = b;

    for (int i = 0; i < taille; i++)

    {

        tab[i] = min + (max - min) *

            (float)rand() / RAND_MAX;

    }

}

const float& TableauBorne::operator[](int i) const

{

    return tab[i];
}
