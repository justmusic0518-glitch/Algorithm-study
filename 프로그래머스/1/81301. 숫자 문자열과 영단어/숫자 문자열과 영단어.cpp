#include <string>
#include <map>

using namespace std;

int solution(string s) {
    std::map<string, string> number_map = {
        {"zero", "0"},
        {"one", "1"},
        {"two", "2"},
        {"three", "3"},
        {"four", "4"},
        {"five", "5"},
        {"six", "6"},
        {"seven", "7"},
        {"eight", "8"},
        {"nine", "9"}
    };
    
    for (auto number : number_map)
    {
        size_t pos = s.find(number.first);
        
        while (pos != std::string::npos)
        {
            s.replace(pos, number.first.length(), number.second);

            pos = s.find(number.first);
        }
    }
    
    return stoi(s);
}