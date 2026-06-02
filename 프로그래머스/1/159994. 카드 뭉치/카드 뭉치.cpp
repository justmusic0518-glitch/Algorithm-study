#include <string>
#include <vector>
#include <queue>

using namespace std;

// 목표 : cads1, cards2를 차례대로 꺼내서 goal을 완성시킨다. 순서대로 나가지 못하면 result를 NO로 반환
// 1. for로 반복문 돌려서 queue<string> 에 담은다음
// 2. q.front()로 앞만 뽑고 goal[i] == cards1.front() cards1pop goal [i] == cards2.front() cards2pop 
// 3. 둘다 if elseif해서 둘다 안되면 return "NO" 바로끝냄 
// 4. 마지막은 return "Yes"

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    queue<string> c1;
    queue<string> c2;
    
    for (auto card1 : cards1)
    {
        c1.push(card1);
    }
    
    for (auto card2 : cards2)
    {
        c2.push(card2);
    }
    
    for (int i = 0; i < goal.size(); i++)
    {
        if (goal[i] == c1.front() && !c1.empty())
        {
            c1.pop();
        }
        else if (goal[i] == c2.front() && !c2.empty())
        {
            c2.pop();
        }
        else
        {
            return "No";
        }
    }
    
    
    return "Yes";
}
