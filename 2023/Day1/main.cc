#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string digits {"123456789"};
string digitsWritten[] {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

// function to search for the first and last occurence of a digit in a string
void searchForOccurence(const string line, int& first, int& last){
    int firstOccurredIndex {};
    int lastOccurredIndex {};

    //find the first and last occurence of a digit in the string
    firstOccurredIndex = line.find_first_of(digits);
    first = line[firstOccurredIndex] - '0';
    lastOccurredIndex = line.find_last_of(digits);
    last = line[lastOccurredIndex] - '0';


    int count {1};
    for (const auto& digit: digitsWritten)
    {   
        int newFirstIndex = line.find(digit);
        if(newFirstIndex < firstOccurredIndex && newFirstIndex != string::npos)
        {
            firstOccurredIndex = newFirstIndex;
            first = count;
        } 

        int newLastIndex = line.rfind(digit);
        if (newLastIndex > lastOccurredIndex && newLastIndex != string::npos)
        {
            lastOccurredIndex = newLastIndex;
            last = count;
        }
        count++;
    } 
}

int main(){
    //open file to read
    ifstream inputFile("input.txt");

    //check if file is open else throw error
    if (!inputFile)
    {
        cerr << "Error while opening file" << endl;
        return 1;
    }

    int sum {0};
    int first;
    int last;
    string line;

    //read file line by line
    while (getline (inputFile, line))
    {
        searchForOccurence(line, first, last);
        sum += first * 10 + last;
    }

    inputFile.close();

    cout << "What is the sum of all of the calibration values? " << endl;
    cout << "What is the sum of all of the calibration values? " << sum << endl;
    
    return 0;
}