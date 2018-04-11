#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
    private:
        int delai;
        Chrono * mychrono;
    protected:
        int attente;
    public:
        ObjetTempo(Chrono*, int);
        Chrono * getChrono();
        void finTempo();
        int getDelai();
    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
