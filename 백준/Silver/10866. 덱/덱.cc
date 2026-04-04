#include <iostream>
#include <deque>
#include <string>

int main(){
    std::deque<int> deq;
    std::string input;
    int N;
    
    std::cin >> N;
    
    while (N != 0)
    {
        std::cin >> input;
        if (input == "push_front")
        {
            int X;
            std::cin >> X;
            
            deq.push_front(X);
        }
        else if (input == "push_back")
        {
            int X;
            std::cin >> X;
            
            deq.push_back(X);
        }
        else if (input == "pop_front")
        {
            if (!deq.empty())
            {
                std::cout << deq.front() << std::endl;
                deq.pop_front();
            }
            else std::cout << "-1\n";
        }
        else if (input == "pop_back")
        {
            if (!deq.empty())
            {
                std::cout << deq.back() << std::endl;
                deq.pop_back();
            }
            else std::cout << "-1\n";

        }
        else if (input == "size")
        {
            std::cout << deq.size() << std::endl;
        }
        else if (input == "empty")
        {
            if (!deq.empty()) std::cout << "0\n"; 
            else std::cout << "1\n";
        }
        else if (input == "front")
        {
            if (!deq.empty()) std::cout << deq.front() << std::endl;
            else std::cout << "-1\n";
        }
        else if (input == "back")
        {
            if (!deq.empty()) std::cout << deq.back() << std::endl;
            else std::cout << "-1\n";
        }
        
        --N;
    }
}
