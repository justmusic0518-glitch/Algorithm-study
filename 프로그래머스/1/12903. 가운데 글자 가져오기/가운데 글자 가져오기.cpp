#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int num = s.size() / 2;
    
    if (s.size() % 2 == 0)
    {
        return s.substr(num - 1, 2);
    }
    
    return s.substr(num, 1);
}