#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

// 1. unordered_map<char, int> visited를 선언
// 2. for로 돌면서 visited에 key 에 문자, value에 i 기록 
// 3. 기록 하기전에 전에 찾았던 key가 있는지 확인 
// 4. 있으면 answer.push_back(i - value); 후 이 value로 덮어씌움
// 5. 없으면 answer.push_back(-1); insert.


vector<int> solution(string s){
    vector<int> answer;
    unordered_map<char, int> visited;
    
    for (int i = 0; i < s.size(); ++i)
    {
        if (visited.find(s[i]) == visited.end())
        {
            visited.insert({s[i], i});
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(i - visited.find(s[i])->second);
            visited.find(s[i])->second = i;
        }
    }
    
    return answer;
}