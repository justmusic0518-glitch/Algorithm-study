#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    vector<int> vec;

    if (n < m) swap(n, m);
    
    for (int i = 1; i <= n * m; ++i)
    {
        if (m % i == 0)
        {
            if (n % i == 0)
            {
                vec.push_back(i);
            }
        }
        if (i % n == 0 && i % m == 0)
        {
            answer.push_back(vec.back());
            answer.push_back(i);
            break;
        }
    }
        
    return answer;
}
