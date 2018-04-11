#include "voyant.h"
#include <iostream>
using namespace std;

nsDigicode::Voyant::Voyant(couleur coul, etat Etat):coul(coul), Etat(Etat)
{

}

string nsDigicode::Voyant::getstatut()
{
    if (Etat == allume)
        return "ON";
    else
        return "OFF";
}

void nsDigicode::Voyant::allumer()
{
    Etat = allume;
}

void nsDigicode::Voyant::eteindre()
{
    Etat = eteint;
}
