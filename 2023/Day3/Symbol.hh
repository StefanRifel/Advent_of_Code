#ifndef SYMBOL_HH
#define SYMBOL_HH

#include "Engine.hh"

class Symbol : public Engine{
private:
    char value;
    int col;
public:
    Symbol();
    Symbol(char value, int row, int col);

    const char& getValue() const;
    const int& getCol() const;

    virtual std::string toString() override;

    virtual ~Symbol();
};

#endif