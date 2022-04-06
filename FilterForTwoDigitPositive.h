#ifndef FILTERTWODIGITPOSITIVE_H
#define FILTERTWODIGITPOSITIVE_H
#include "FilterGeneric.h"
class FilterForTwoDigitPositive : public FilterGeneric{
public:
    virtual bool g(int);
};
#endif