#ifndef ENGINE_HH
#define ENGINE_HH

#include <string>

class Engine{
private:
    int row;
public:
    Engine();
    Engine(int row);
    
    const int& getRow() const;
    virtual std::string toString();
    
    virtual ~Engine();
};

#endif