#include <iostream>
#include <stack>

int main(){
    std::stack<int> s;
    int commandCount;
    std::string tempStr;
    
    std::cin >> commandCount;
    
    while (commandCount != 0)
    {
        tempStr.clear();
        
        std::cin >> tempStr;
        
        if (tempStr == "push")
        {
            int x;
            std::cin >> x;
            s.push(x);
        }
        else if (tempStr == "pop")
        {
            if (s.empty()) std::cout << "-1\n";
            else
            {
                std::cout << s.top() << "\n"; 
                s.pop();
            }
        }
        else if (tempStr == "size")
        {
            std::cout << s.size() << "\n";
        }
        else if (tempStr == "empty")
        {
            if (s.empty()) std::cout << true << "\n";
            else std::cout << false << "\n";
        }
        else if (tempStr == "top")
        {
            if (s.empty()) std::cout << "-1\n";
            else std::cout << s.top() << "\n";
        }
        --commandCount;
    }
}