#include "alarme.h"
#include <iostream>

using namespace std;

nsDigicode::Alarme::Alarme()
{

}

void nsDigicode::Alarme::declencher()
{
    while(true)
    {
        cout << "Alarme : la porte n'a pas été refermée" << endl;
        sleep(1);
    }
}
