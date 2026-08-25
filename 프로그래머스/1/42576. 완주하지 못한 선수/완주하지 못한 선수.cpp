#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

/*
 * 1. unordered_map<string, int> 로 for를 돌려 참가자를 insert한다. 
 * 2. insert한 참가자와 completion에 동일한 참가자가 있는지 확인하고 동일한 참가자가 있으면 -1
 * * * 왜 -1하냐면 동명이인이 있기때문
 * 3. 참여 안한사람은 무조건 한명이기때문에 count가 0 이상인사람 return
*/

string solution(vector<string> participant, vector<string> completion) {
    // string, int로 참가자 관리
    unordered_map<string, int> map;
    
    // map에 participant참가자를 넣고 int ++
    for (const string& name : participant)
    {
        map[name]++;
    }
    
    // map에 있는 완주자 빼기
    for (const string& name : completion)
    {
        map[name]--;
    }
    
    for (const auto& [name, count] : map)
    {
        if (count > 0)
        {
            return name;
        }
    }
    
    return "";
}