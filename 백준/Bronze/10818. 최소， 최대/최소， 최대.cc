#include <iostream>
#include <vector>
#include <string>

int main(){
    int MAX, MIN, n, x;
    
    std::cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        std::cin >> x;
        if (i == 0)
        {
            MAX = x;
            MIN = x;
        }
        MAX = MAX < x ? x : MAX;
        MIN = MIN < x ? MIN : x;
    }
    std::cout << MIN << " " << MAX;
}
