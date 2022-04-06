#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>
class MapGeneric {
public:
    std::vector<int> map(std::vector<int>);
protected:
    virtual int f(int) = 0;
    std::vector<int> listToReturn;
};
#endif