#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> numbers;
    while (n != 0)
    {
        numbers.push_back(n % 10);
        n /= 10;
    }
    std::sort(numbers.begin(), numbers.end(), [](int a, int b)
        {
           return a > b; 
        });
    for (auto result : numbers)
    {
        answer *= 10; 
        answer += result;

    }
    
    return answer;
}