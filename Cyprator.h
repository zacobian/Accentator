#ifndef __CYPRATOR_H__
#define __CYPRATOR_H__



#include "Accentator.h"


class Cyprator: public Accentator {
public:
    Cyprator(string t) {text = t;}
    void pronounce_text();
};
#endif
