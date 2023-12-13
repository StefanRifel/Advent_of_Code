#ifndef NUMBER_HH
#define NUMBER_HH

#include "Engine.hh"
#include "Symbol.hh"

#include <vector>

class Number : public Engine{
private:
    int value;
    std::vector<int> col;

    void inizilizeCol(int col);
public:
    Number();
    Number(int value, int row, int col);

    const int& getValue() const;
    const std::vector<int>& getCol() const;
    bool ckeckAdjacent(Symbol* symbol);

    virtual std::string toString() override;

    virtual ~Number();
};

#endif