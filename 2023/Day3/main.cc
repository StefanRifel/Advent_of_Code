#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

#include "Engine.hh"
#include "Number.hh"
#include "Symbol.hh"

#include "../Util/util.hh"

using namespace std;

template<typename Base, typename T>inline bool instanceOf(const T *ptr) {
   return dynamic_cast<const Base*>(ptr) != nullptr;
}

void processLine(vector<Engine*>& engine, string& line, int count){
    vector<string> tokens {};
    cout << "\nCurrent: " << line << endl;
    int totalPos {0};
    int posStart {0};
    int posEnd {0};
    while((posEnd = line.substr(posStart, line.size()).find(".")) != string::npos){
        string token = line.substr(posStart, posEnd);
        if(token.size() != 0){
            totalPos = posStart + token.size() - 1;
            if(isdigit(token.at(0))){
                Number* numb { new Number {util::strtoi(token), count, totalPos} };
                engine.push_back(numb);
            } else {
                Symbol* symb { new Symbol {util::strtoc(token), count, totalPos} };
                engine.push_back(symb);
            }
            tokens.push_back(token);
        }
        posStart += posEnd + 1;
    }  
}

void work(vector<vector<Engine*>>& engine, int& sum, const int& count){
    //int row {0}; // -
    //int col {0}; // |

    Number currNumb;
    Symbol surrSymb;

    for(int row = 0; row < count; row += 2){
        int sizeFirst {engine[row].size()};
        int sizeSecound {engine[row].size()};
        int sizeThird {engine[row].size()};


        for(int col = 0; col < sizeFirst; col++){
            if(instanceOf<Number>(engine[row][col])){
                //Found Number in First row
                Number* numb = static_cast<Number*>(engine[row][col]);
                if(instanceOf<Symbol>(engine[row][col + 1]) && col + 1 < sizeFirst){
                    //Right from current Number is Symbol
                    Symbol* symbol = static_cast<Symbol*>(engine[row][col + 1]);
                    if(numb->ckeckAdjacent(symbol)){
                        sum += numb->getValue();
                    }
                } else {
                    //Check if secound Line have Symbol
                    
                }
            } else {
                //Found Symbol in first Row
            }
        }
    }
}

int main(void){

    ifstream inputFile {"test.txt"};
    if (!inputFile)
    {
        cerr << "Error while opening file" << endl;
        return 1;
    }

    string line;
    int count {0};

    vector<vector<Engine*>> engine {};
    
    while (getline(inputFile, line)){
        vector<Engine*> e {};
        processLine(e, line, count);
        engine.push_back(e);
        count++;
    }

    int sum {0};
    work(engine, sum, count);


    cout << "Part 1: The sum of all of the part numbers in the engine schematic is: " << sum << endl;

    return 0;
} 