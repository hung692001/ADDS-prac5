#ifndef REDUCEGCD_H
#define REDUCEGCD_H
#include "ReduceGeneric.h"
class ReduceGCD : public ReduceGeneric {
public : 
    virtual int binaryOperator(int,int);
    ReduceGCD();
};
#endif