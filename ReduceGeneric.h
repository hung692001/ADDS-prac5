#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>
class ReduceGeneric {
public:
    int reduce(std::vector<int>);
protected:
    virtual int binaryOperator(int,int) = 0;
    int reducedInt;
};
#endif