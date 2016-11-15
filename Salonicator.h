#ifndef __SALONICATOR_H__
#define __SALONICATOR_H__


#include "Accentator.h"


class Salonicator: public Accentator {
public:
    Salonicator(string t) {text=t;}
    void pronounce_text();
};
#endif