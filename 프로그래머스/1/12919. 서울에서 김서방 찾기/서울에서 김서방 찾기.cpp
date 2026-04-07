#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> seoul) {
    string answer = "";
    auto it = std::find(seoul.begin(), seoul.end(), "Kim");
    
    int num = std::distance(seoul.begin(), it);
    
    answer = "김서방은 " + to_string(num) + "에 있다";
    return answer;
}