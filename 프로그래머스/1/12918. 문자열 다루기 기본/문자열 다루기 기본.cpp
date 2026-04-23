#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    if (s.length() != 4 && s.length() != 6) return false;
    
    for (auto c : s)
    {
        if (c >= 'A')
        {
            return false;
        }
    }
    return true;
}