#ifndef FILTERODD_H
#define FILTERODD_H
#include "FilterGeneric.h"
class FilterOdd : public FilterGeneric{
public:
    virtual bool g(int);
};
#endif