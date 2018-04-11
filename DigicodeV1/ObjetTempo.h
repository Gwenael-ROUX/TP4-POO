#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
    protected:
        int delai = 1;
        Chrono * mychrono;
        int attente;
    public:
        ObjetTempo(Chrono* Chrono = nullptr, int  sec = 0);
        Chrono * getChrono();
        void finTempo();
        int getDelai();
    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
