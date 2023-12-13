#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>

using namespace std;

void print(vector<string> list){
    for(auto elem: list){
        cout << elem << endl;
    }
    cout << "\n" << endl;
}

int main(void){

    // open input file
    ifstream inputFile("test.txt");
    if (!inputFile){
        cerr << "Error while opening file" << endl;
        return 1;
    }
    
    /* 
    Separate input File in categories
    
    The almanac (your puzzle input) lists all of the seeds that need to be planted. 
    It also lists what type of soil to use with each kind of seed, 
    what type of fertilizer to use with each kind of soil, 
    what type of water to use with each kind of fertilizer, 
    and so on. 
    */
    vector<string> almanac {};

    string line;
    stringstream ss {};
    while (getline(inputFile, line)){
        if(line == ""){
            almanac.push_back(ss.str());
            ss.str("");
        } else {
            ss << line << "\n";
        }
    }
    almanac.push_back(ss.str());
    ss.str("");

    map<int, int> seeds {};

    //fillSeeds(almanac, seeds);

    for(auto elem: almanac){
        vector<string> temp {};
        stringstream ss {};
        ss << elem;
        string line;
        while (getline(ss, line)){
            temp.push_back(line);
        }
        seeds.insert(pair<int, int>(stoi(temp.at(0)), stoi(temp.at(1))));
    }

    cout << "Part 1: What is the lowest location number that corresponds to any of the initial seed numbers? " << endl;

    return 0;
}