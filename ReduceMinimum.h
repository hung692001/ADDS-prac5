#ifndef REDUCEMINIMUM_H
#define REDUCEMINIMUM_H
#include "ReduceGeneric.h"
class ReduceMinimum : public ReduceGeneric {
public : 
    virtual int binaryOperator(int,int);
    ReduceMinimum();
};
#endif