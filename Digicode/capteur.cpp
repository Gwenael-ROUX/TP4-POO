#include "capteur.h"
#include "kbhit.h"

#include<iostream>

using namespace std;

nsDigicode::Capteur::Capteur()
{

}

int nsDigicode::Capteur::detecter()
{
    if(_kbhit() == 0)
        return 0;
    else
        return 1;
}
