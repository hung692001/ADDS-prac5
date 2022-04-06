#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>
class FilterGeneric {
public:
    std::vector<int> filter(std::vector<int>);
protected:
    virtual bool g(int) = 0;
    std::vector<int> listToReturn;
};
#endif