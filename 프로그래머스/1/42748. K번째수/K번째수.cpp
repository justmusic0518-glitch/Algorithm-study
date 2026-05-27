#include <string>
#include <vector>
#include <algorithm>

using namespace std;

// 1. commands.size()만큼 반복문 돌리기
// 2. for(int j = commands[i][0]; i < commands[i][1]; ++j){}
// 3. temp.push_back(array[j]);
// 4. sort
// 5. answer.push_back(temp[commands[i][3]]); 

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    
    for (int i = 0; i < commands.size(); ++i)
    {
        for (int j = commands[i][0] - 1; j < commands[i][1]; ++j)
        {
            temp.push_back(array[j]);
        }
        
        std::sort(temp.begin(), temp.end());
        
        answer.push_back(temp[commands[i][2] - 1]);
        temp.clear();
    }

    
    return answer;
}

