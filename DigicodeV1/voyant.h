#ifndef VOYANT_H
#define VOYANT_H
#include <string>

namespace nsDigicode
{

enum couleur {rouge, vert};
enum etat {allume, eteint};

class Voyant
{
private:
    couleur coul;
    etat Etat;
public:
    Voyant(couleur, etat);
    std::string getstatut();
    void allumer();
    void eteindre();
};

}

#endif // VOYANT_H
