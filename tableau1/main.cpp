#include"iostream"

#include "Tableau.h"

#include "TableauBorne.h"

using namespace std;

int main()

{

    Tableau t1(5);

    cout << "Tableau normal :" << endl;

    for (int i = 0; i < 5; i++)

    {

        t1[i] = i * 2;

        cout << t1[i] << " ";

    }

    cout << endl;

    Tableau t2(t1);

    cout << "Tableau copie :" << endl;

    for (int i = 0; i < 5; i++)

    {

        cout << t2[i] << " ";

    }

    cout << endl;

    TableauBorne tb(5, 10, 20);

    cout << "Tableau borne :" << endl;

    for (int i = 0; i < 5; i++)

    {

        cout << tb[i] << " ";

    }

    cout << endl;

    return 0;

}