#include "FilterOdd.h"
using namespace std;

bool FilterOdd::g(int x){
    if((x%2) != 0){
        return true;
    }else return false;
}