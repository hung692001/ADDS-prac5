#include "ReduceGCD.h"
#include <climits>
#include "math.h"
using namespace std;

ReduceGCD::ReduceGCD(){
    reducedInt = INT_MAX;
}
int ReduceGCD::binaryOperator(int reducedInt, int intToCheck){
    if (reducedInt == INT_MAX){
        return min(reducedInt,intToCheck);
    }
    int i = 2;
    int GCD = 1;
    while(i!= max(reducedInt,intToCheck)){
        if((reducedInt % i == 0) && (intToCheck% i == 0)){
            GCD = i;
       
        }
        i++;
    }
    return GCD;
}