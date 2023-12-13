#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

#include "../Util/util.hh"

using namespace std;

int checkNumbers(map<string, int>& winningNumbers, vector<string>& cardNumbers, int& match){
    int sum {0};
    for (auto& cardNumber : cardNumbers){
        if (winningNumbers.find(cardNumber) != winningNumbers.end()){
            if(sum == 0) {
                sum = 1;        
            } else {
                sum *= 2;
            }
            match++;
        }
    }
    return sum;
}

int processLine(string& line, int (&scratchCards)[206], int size){
    cout << "\n" << line << endl;

    //Delete prefix "Card1 :"
    int id {0};
    int pos {0};
    int whitespace {0};
    whitespace = line.find(" ");
    pos = line.find(":");
    id = util::strtoi(line.substr(whitespace, pos - whitespace)) - 1;
    cout << "ID: " << id << endl;
    line.erase(0, pos + 2);

    //Get winning numbers
    pos = line.find("|");
    string subStr {line.substr(0, pos - 1)};
    line.erase(0, pos + 2);

    //Fill map with winning numbers
    map<string, int> winningNumbers {};
    string token;
    while ((pos = subStr.find(" ")) != string::npos){
        token = subStr.substr(0, pos);
        winningNumbers[token] = util::strtoi(token);
        subStr.erase(0, pos + 1);
    }
    winningNumbers[subStr] = util::strtoi(subStr);

    //Delete leading whitespace
    if(line.at(0) == ' '){
        line.erase(0, 1);
    }

    //Fill vector with card numbers
    vector<string> cardNumbers {};
    while ((pos = line.find(" ")) != string::npos){
        token = line.substr(0, pos);
        cardNumbers.push_back(token);
        if(line.at(pos + 1) == ' '){
            line.erase(0, pos + 2);
        }else {
            line.erase(0, pos + 1);
        }
    }
    cardNumbers.push_back(line);

    int match {0};
    int sum = checkNumbers(winningNumbers, cardNumbers, match);
    cout << "Match: " << match << endl;
    
    for(int i = id; i < (id + match); i++){
        scratchCards[i + 1] += scratchCards[id];
    }

    return sum;
}

int main(void){

    ifstream inputFile {"input.txt"};
    if (!inputFile)
    {
        cerr << "Error while opening file" << endl;
        return 1;
    }

    int sum {0};
    int scratchCards[206];
    for(int i = 0; i < 206; i++){
        scratchCards[i] = 1;
    }


    string line;
    while (getline(inputFile, line)){
        sum += processLine(line, scratchCards, 206);
    }

    int totalScratchCards {0};
    for(int i = 0; i < 206; i++){
        totalScratchCards += scratchCards[i];
    }

    for(int i = 0; i < 206; i++){
        cout << "Scratchcard " << i << " has " << scratchCards[i] << " Cards" << endl;
    }

    cout << "Part 1: How many points are they worth in total? " << sum << endl;
    cout << "Part 2: how many total scratchcards do you end up with? " << totalScratchCards << endl;

    return 0;
}