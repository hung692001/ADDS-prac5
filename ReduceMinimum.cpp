#include "ReduceMinimum.h"
#include <climits>
using namespace std;

ReduceMinimum::ReduceMinimum(){
    reducedInt = INT_MAX;
}

int ReduceMinimum::binaryOperator(int reducedInt, int intToCheck){
    if(intToCheck < reducedInt){
        return intToCheck;
    }else return reducedInt;
}