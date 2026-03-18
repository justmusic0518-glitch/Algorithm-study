#include <iostream>
#include <vector>
#include <string>

int main(){
    bool number[30] = { false };
    int submitStudent = 28;
    int allStudent = 30;
    int n;
    
    for (int i = 0; i < submitStudent; ++i)
    {
        std::cin >> n;
        number[n-1] = true; 
    }
    for (int i = 0; i < allStudent; ++i)
    {
        if (number[i] == false)
        {
            std::cout << i+1 << "\n";
        }
    }
}
