#include <string>
#include <vector>

using namespace std;

// 1. a = requiredCount; b = returnCount; n = currentCount; 
// while(n >= a)
// 2. answer += n / a;
// 3. n = (n / a) + (n % a);

int solution(int a, int b, int n) {
    int answer = 0;
    
    while (n >= a)
    {
        answer += n / a * b;
        n = n / a * b + n % a;
    }
    return answer;
}