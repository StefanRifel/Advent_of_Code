#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>


#include "CubeSet.hh"
#include "../Util/util.hh"

using namespace std;

int processLine(string line, int& summedIDsLowestPlayable){
    
    vector<string> result {util::separateLineByDelimiter(line, ",;")};
    
    CubeSet cubeSet {1, 1, 1};
    for(auto elem: result){

        string colour {};
        int value {};

        stringstream ss {};

        ss << elem;
        ss >> value;
        ss >> colour;

        if(colour.compare("red") == 0){
            if(cubeSet.getRed() < value){
                cubeSet.setRed(value);
            }   
        } else if (colour.compare("green") == 0){
            if(cubeSet.getGreen() < value){
                cubeSet.setGreen(value);
            } 
        } else if (colour.compare("blue") == 0){
            if(cubeSet.getBlue() < value){
                cubeSet.setBlue(value);
            } 
        }
    }

    summedIDsLowestPlayable += cubeSet.calcPower();
    return cubeSet.isValid();
}


int main() {

    ifstream inputFile("input.txt");
    if (!inputFile)
    {
        cerr << "Error while opening file" << endl;
        return 1;
    }   

    int sumedIDs {0};
    int summedIDsLowestPlayable {0};
    string line {};

    while (getline(inputFile, line))
    {
        int id {util::strtoi(line.substr(line.find(" "), line.find(":")))};
        line.erase(0, line.find(":") + 2);

        if(processLine(line, summedIDsLowestPlayable)){
            sumedIDs += id;
        }
    }

    inputFile.close();

    cout << "Paer 1: The sum of all IDs from possible games is: " << sumedIDs << endl;
    cout << "Paer 2: The the sum of the power of these sets is: " << summedIDsLowestPlayable << endl;

    return 0;
}