#include <iostream>
#include <vector>

#include "FilterForTwoDigitPositive.h"
#include "FilterOdd.h"
#include "MapAbsoluteValue.h"
#include "MapGeneric.h"
#include "MapSquare.h"
#include "MapTriple.h"
#include "ReduceGCD.h"
#include "ReduceMinimum.h"

void customPrint(std::vector<int> list) {
    for (int i = 0; i < list.size(); i++) {
        std::cout << list.at(i) << ", ";
    }
    std::cout << std::endl;
}

int main() {
    MapAbsoluteValue* mapAbsolute = new MapAbsoluteValue();
    MapTriple* mapTriple = new MapTriple();
    FilterForTwoDigitPositive* filterTwoDigitPositive =
        new FilterForTwoDigitPositive();
    FilterOdd* filterOdd = new FilterOdd();
    ReduceGCD* reduceGCD = new ReduceGCD();
    ReduceMinimum* reduceMinimum = new ReduceMinimum();

    std::vector<int> list{-5,  -24, -123, -81, 200, 157,  84,  67,  -83,  -60,
                          -72, 192, -25,  -20, -50, -181, -70, -15, -108, -123};

    std::vector<int> absList = mapAbsolute->map(list);
    customPrint(absList);
    std::vector<int> tripledList = mapTriple->map(absList);
    customPrint(tripledList);
    std::vector<int> oddList = filterOdd->filter(tripledList);
    customPrint(oddList);
    std::vector<int> twoPositiveList = filterTwoDigitPositive->filter(oddList);
    customPrint(twoPositiveList);
    int gcd = reduceGCD->reduce(twoPositiveList);
    int minimum = reduceMinimum->reduce(twoPositiveList);

    std::cout << minimum << " " << gcd << std::endl;
}