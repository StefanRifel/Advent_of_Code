#include "Engine.hh"
#include <sstream>

Engine::Engine(){}

Engine::Engine(int row){
    this->row = row;
}

const int& Engine::getRow() const{
    return row;
}

std::string Engine::toString(){
    std::ostringstream os {};
    os << "Row: " << row;
    return os.str();
}

Engine::~Engine(){}