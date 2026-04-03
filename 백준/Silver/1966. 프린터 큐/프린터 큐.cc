#include <queue>
#include <iostream>
#include <algorithm>

int main(){
    int testCount = 0;
    
    std::cin >> testCount;
    
    while (testCount != 0)
    {
        int N = 0; // Queue size
        int queueCount = 0; // 내가 원하는 숫자가 몇번 째에 있는지
        int rarity = 0; // 중요도 높을수록 먼저
        
        std::queue<std::pair<int, int>> print;
        std::priority_queue<int> priority;
        std::pair<int, int> tempPair;
        int count = 0;

        
        std::cin >> N;
        std::cin >> queueCount;
        for (int i = 0; i < N; ++i)
        {
            std::cin >> rarity;
            print.push({rarity, i});
            priority.push(rarity);
        }
        
        while (!print.empty())
        {
            tempPair = print.front();
            if (print.front().first != priority.top())
            {
                print.pop();
                print.push(tempPair);
            }
            else
            {
                print.pop();
                priority.pop();
                ++count;
                if (tempPair.second == queueCount) break;
            }
        }
        std::cout << count << "\n";
        --testCount;
    }
}
