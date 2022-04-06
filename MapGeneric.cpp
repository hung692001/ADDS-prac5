#include "MapGeneric.h"
using namespace std;

vector<int> MapGeneric::map(vector <int> listOfItems){
   if(listOfItems.size() <= 0){
       return listToReturn;
   }
   else{listToReturn.push_back(f(listOfItems.at(0)));
       listOfItems.erase(listOfItems.begin());
       return map(listOfItems);
   }
}