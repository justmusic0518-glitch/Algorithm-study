#include <string>
#include <vector>
#include <queue>
#include <iostream>

// 1. N(사람 수 만큼 순서대로 숫자를 채워 넣는 배열),K(몇번째 사람을 제거 할지)를 받는다.
// 2. 원 형태이므로 K번째마다 계속 지운다
// 3. N.size() < K가 되면 

int main(){
    int K, N;
    std::queue<int> nQue;
    
    std::cin >> N >> K;
    
    for (int i = 1; i <= N; ++i)
    {
        nQue.push(i);
    }
    
    std::cout << "<";
    for (int i = 1; !nQue.empty(); ++i)
    {
        if (i % K != 0)   // 계속 도는 원 형태 만들기
        {
            nQue.push(nQue.front());
            nQue.pop();
        }
        else if (i % K == 0)
        {
            if (i != K)
                std::cout << ", ";
            std::cout << nQue.front();
            nQue.pop();
        }
    }
    std::cout << ">\n";
}