#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int sign = 1; 

    for(const auto& ascii : s){
        if (ascii == '-')
        {
            sign = -1;
        }
        else if (ascii == '+')
        {
            sign = 1;
        }
        else
        {
            answer = (answer * 10) + (ascii - '0');
        }
    }
    return sign * answer;
}