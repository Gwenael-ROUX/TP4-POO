#include "porte.h"
#include <iostream>

using namespace std;

nsDigicode::Porte::Porte(Chrono* chrono_, int delai_)
{
    delai = delai_;
    mychrono = chrono_;
}

bool nsDigicode::Porte::fermer()
{
    mychrono->demarrer(this);
    while(true)
    {
        if(mycapteur.detecter() == 0)
        {
            mychrono->arreter();
            return true;
        }
    }
}

bool nsDigicode::Porte::ouvrir()
{
    attente = 1;
    mychrono->demarrer(this);
    while(true)
    {
        if(mycapteur.detecter() == 1)
        {
            Porte::fermer();
        }
    }
}
