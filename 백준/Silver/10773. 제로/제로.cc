#include <iostream>
#include <vector>
#include <string>

// 1. 정수 K개의 줄을 선언한다.
// 2. k개의 줄에 정수가 1개씩 주어진다.
//    정수가 0일 경우에는 가장 최근에 쓴 수를 지우고 아닐  경우 해당 수를 쓴다
// 정수가 0일 경우에 지울 수 있는 수가 있음을 보장할 수 있따

int main(){
    int K, sum = 0;
    
    std::cin >> K;
    std::vector<int> arr;   
    
    for (int i = 0; i < K; ++i)
    {
        int num;
        std::cin >> num;

        if (i != 0 && num == 0)
        {
            arr.pop_back();
        }
        else
        {
            arr.push_back(num);
        }
    }
    for (int i = 0; i < arr.size(); ++i)
    {
        sum += arr[i];
    }
    std::cout << sum;
}