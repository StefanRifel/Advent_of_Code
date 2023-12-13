#include "Symbol.hh"

#include <sstream>

Symbol::Symbol(){}

Symbol::Symbol(char value, int row, int col) : Engine {row} {
    this->value = value;
    this->col = col;
}

const char& Symbol::getValue() const{
    return value;
}

const int& Symbol::getCol() const{
    return col;
}

std::string Symbol::toString(){
    std::ostringstream os {};
    os << "Value: " << value << " " << Engine::toString() << " Col: " << col << std::endl;
    return os.str();
}

Symbol::~Symbol(){}