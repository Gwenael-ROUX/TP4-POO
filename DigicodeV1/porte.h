#ifndef PORTE_H
#define PORTE_H

#include "ObjetTempo.h"
#include "capteur.h"

namespace nsDigicode {
    class Porte : public ObjetTempo
    {
        private:
            Capteur mycapteur;
            bool fermer();
        public:
            Porte(Chrono*, int);
            bool ouvrir();
    };
}
#endif // PORTE_H
