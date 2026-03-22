#include <iostream>
#include <set>
#include <vector>

// 1. N개의 정수를 받는다.
// 2. set으로 중복되지않는 배열을 받는다.
// 3. M개의 정수를 받고 vector로 배열을 받는다.
// 4. 반복문으로 조냊하면 1 존재하지않으면 0 을 출력한다.

int main(){
    int N, M, num;
    std::set<int> setArray;
    
    std::cin >> N;
    for (int i = 0; i < N; ++i)
    {
        std::cin >> num;
        setArray.insert(num);
    }
    
    std::cin >> M;
    std::vector<int> vecArray(M);
    
    for (int i = 0; i < M; ++i)
    {
        std::cin >> vecArray[i];
    }
    
    for (const auto& v : vecArray)
    {
        if (setArray.find(v) != setArray.end()) std::cout << true << "\n";
        else std::cout << false << "\n";
    }
    
}