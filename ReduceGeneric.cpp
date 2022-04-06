#include "ReduceGeneric.h"
#include <iostream>
using namespace std;
int ReduceGeneric::reduce(vector <int> listOfItems){
    
    if(listOfItems.size() <= 0){
        return reducedInt;
    }
    else{
        reducedInt = binaryOperator(reducedInt,listOfItems.at(0));
        listOfItems.erase(listOfItems.begin());
        return reduce(listOfItems);
    }
}