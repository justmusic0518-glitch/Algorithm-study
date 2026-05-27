#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// 1. strings의 길이 가져와
// 2. for돌려서 n만큼 substr(n, 1)
// 3. std::srot(strins.begin(), strings.end(), [](int a, int b){})


vector<string> solution(vector<string> strings, int n) {
    std::sort(strings.begin(), strings.end(), [&](std::string a, std::string b)
    {
        std::string aTemp = a.substr(n, 1);
        std::string bTemp = b.substr(n, 1);
        
        if (aTemp < bTemp) return true;
        if (aTemp == bTemp) return a < b;
        return false;
    });
    
    return strings;
}