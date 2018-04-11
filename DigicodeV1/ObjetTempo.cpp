#include "ObjetTempo.h"

using namespace nsDigicode;
using namespace std;

ObjetTempo::ObjetTempo(Chrono* chrono_, int delai_)
{
    delai = delai_;
    mychrono = chrono_;
}

Chrono *ObjetTempo::getChrono()
{
    return (mychrono);
}

void ObjetTempo::finTempo()
{
    mychrono->arreter();
    attente = 0;
}

int ObjetTempo::getDelai()
{
    return (delai);
}
