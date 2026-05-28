#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// 1. for 반복문으로 다 더해서 push_back 한다.
// 2. erase(unique(vector.begin(), vector.end())) 로 중복을 지운다.
// 3. sort해서 오름차순으로 담는다.

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    
    for (int i = 0; i < numbers.size(); ++i)
    {
        int j = 1;
        for (j = j + i; j < numbers.size(); ++j)
        {
            answer.push_back(numbers[i] + numbers[j]);
        }    
    }
    
    sort(answer.begin(),answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}