#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 1. score.size() == 일 수, k = 명예의전당 자리 수\
// 2. vector<int> day; 
// 3. 반복문 돌려서 i를 일자수로. day.push_back(score[i]);
// 3. if(day[k - 1] != day.empty()) answer.push_back(day[k-1])
// 4. else answer.push_back(day.back());
// . return k번째 수 

vector<int> solution(int k, vector<int> score){
    vector<int> answer;
    vector<int> day;
    
    for (int i = 0; i < score.size(); ++i)
    {
        day.push_back(score[i]);
        
        sort(day.begin(),day.end(), std::greater<int>());
        
        if (i >= k-1) answer.push_back(day[k - 1]);
        else answer.push_back(day.back());
    }
    return answer;
}