#include <iostream>
#include <sstream>
#include <regex>

namespace util {
    int strtoi(std::string s){
        std::stringstream ss {};
        int i {};
        ss << s;
        ss >> i;
        return i;
    }

    char strtoc(std::string s){
        return s.at(0);
    }

    void print_string_vector(std::vector<std::string> list){
        std::cout << "\nList now: " << std::endl; 
        int i {0};
        for(auto elem: list){
            std:: cout << i << ": " << elem << std::endl;
            i++;
        }
        std:: cout << "\n" << std::endl;
    }

    std::vector<std::string> separateLineByDelimiter(std::string line, std::string delimiter){     
        std::vector<std::string> result {};
        std::vector<std::string> temp {line};
        
        int pos {};
        
        for(int i = 0; i < delimiter.size(); i++){

            for(auto e: temp){
                
                while ((pos = e.find(delimiter.at(i))) != std::string::npos){
                    std::string token {};
                    token = e.substr(0, pos);
                    result.push_back(token);
                    e.erase(0, pos + 2);
                }
                result.push_back(e);
            }

            if(i < delimiter.size()-1){
                temp.clear();
                temp = result;
                result.clear();
            }
        }

        return result;
    }

    

void test_regex_search(const std::string& input)
    {
    std::regex rgx("[0-9]*");
    std::smatch match;

    if (std::regex_search(input.begin(), input.end(), match, rgx))
    {
        std::cout << "Match\n";

        for (auto m : match)
            std::cout << "  submatch " << m << '\n';

    }
    else
        std::cout << "No match\n";
    }
}