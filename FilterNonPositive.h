#ifndef FILTERNONPOSITIVE_H
#define FILTERNONPOSITIVE_H
#include "FilterGeneric.h"
class FilterNonPositive : public FilterGeneric{
public:
    virtual bool g(int);
};
#endif