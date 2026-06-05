#include <string>
#include <vector>
#include <algorithm>

// 1. 배열별로 1cycle을 넣는다. v1, v2, v3
// 2. answers.size() 만큼 반복문을 돌린다. 
// 3. if(v[v1.size() % i] == answers[i]) ++count 
// 4. count 최대값비교

using namespace std;

vector<int> solution(vector<int> answers){
    vector<int> answer;
    vector<int> count = {0, 0, 0};
    vector<vector<int>> marks = {
        {1, 2, 3, 4, 5}, 
        {2, 1, 2, 3, 2, 4, 2, 5}, 
        {3, 3, 1, 1, 2, 2, 4, 4, 5, 5}};
    
    for (int i = 0; i < answers.size(); ++i)
    {
        for (int j = 0; j < marks.size(); ++j)
        {
            if (marks[j][i % marks[j].size()] == answers[i])
            {
                ++count[j];
            }
        }
    }
    
    int max_val = *std::max_element(count.begin(), count.end());
    
    for (int i = 0; i < count.size(); i++)
    {
        if (count[i] == max_val)
        {
            answer.push_back(i + 1);
        }
    }

    sort(answer.begin(),answer.end());
    
    return answer;
}

