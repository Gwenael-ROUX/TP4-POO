#include "clavier.h"
#include "kbhit.h"
#include <iostream>

using namespace std;

nsDigicode::Clavier::Clavier()
{

}

int nsDigicode::Clavier::saisirChiffre()
{
    int resultat = _kbhit();
    if(resultat == 0)
        return -1;
    else
        return (resultat);
}
