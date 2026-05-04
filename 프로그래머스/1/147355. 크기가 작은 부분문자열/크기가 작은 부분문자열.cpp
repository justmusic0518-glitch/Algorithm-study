#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for (int i = 0; t.length() + 1> i + p.length(); ++i)
    {
        long long num1 = stoll(t.substr(i, p.length()));
        long long  num2 = stoll(p);
        
        if (num1 <= num2) ++answer;
    }
    
    return answer;
}