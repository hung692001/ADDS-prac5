#include "FilterGeneric.h"
using namespace std;

vector<int> FilterGeneric::filter(vector <int> listOfItems){
   if(listOfItems.size() <= 0){
       return listToReturn;
   }
   else{
       bool appendOrNot = g(listOfItems.at(0));
       if(appendOrNot){
           listToReturn.push_back(listOfItems.at(0));
       }
       listOfItems.erase(listOfItems.begin());
       return filter(listOfItems);
       
   }
}