#ifndef __LARISATOR_H__
#define __LARISATOR_H__

#include "Accentator.h"


class Larisator: public Accentator {
public:
    Larisator(string t) {text=t;}
    void pronounce_text();
};
#endif
