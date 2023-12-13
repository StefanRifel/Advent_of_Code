#include "Number.hh"
#include "Symbol.hh"
#include <sstream>

Number::Number(){}

Number::Number(int value, int row, int col) : Engine {row}{
    this->value = value;
    inizilizeCol(col);
}

void Number::inizilizeCol(int col){
    for (int i = 0; i < std::to_string(value).length(); i++){
        this->col.push_back(col - i);
    }
}

const int& Number::getValue() const{
    return value;
}

const std::vector<int>& Number::getCol() const{
    return col;
}

bool Number::ckeckAdjacent(Symbol* symbol){
    return true;
}

std::string Number::toString(){
    std::ostringstream os {};
    os << "Value: " << value << " " << Engine::toString() << " Col: ";
    for (auto e : col){
        os << e << ", ";
    }
    os << std::endl;
    return os.str();
}

Number::~Number(){}