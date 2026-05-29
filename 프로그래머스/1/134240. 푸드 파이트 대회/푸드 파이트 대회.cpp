#include <string>
#include <vector>
#include <deque>

using namespace std;

// 입력 -> [1, 7, 1, 2] 물 개수, 1번 음식 개수, 2번음식 개수, 3번음식 개수
// 무조건 출력시 1번부터 차례대로 그냥 나올 수 있도록 해주는 것이다. 
// 0번은 1로 고정
// 1. if(food[1]~[3] >= 2) 일때만 출력 가능
// 2. if(food[1]~[3] % 2 != 0) 짝수가 아니면 -1만큼 덜 출력 뭐 food[1] -1 이런식으로 출력 
// 3. if(food[1]~[3] / 2 해서 출력) 위에 체크도 할 필요 없을듯 이러면 
// 4. vector를 두개 만들어서 뒤에꺼를 vector sort 해버리고 싶네 ㄹ중간에 0 붙이고 

string solution(vector<int> food) {
    string answer = "";
    deque<int> vec;
    
    for (int i = 1; i < food.size(); ++i)
    {
        int temp = food[i] / 2;
        if (temp != 0)
        {
            for (int j = 0; j < temp; ++j)
            {
                vec.push_front(i);
                answer.append(to_string(i));
            }
        }
    }
    
    answer.append(to_string(0));
    
    for (int x : vec)
    {
        answer += char('0' + x);
    }
    
    return answer;
}