#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr){
    int answer;
    int num = 0;
    
    for (int i = 0; i < arr.size(); ++i)
    {
        if (i == 0)
        {
            answer = arr[i];
            num = i;
            continue;
        }
        if (answer > arr[i])
        {
            answer = arr[i];
            num = i;
        }
    }
    
    arr.erase(arr.begin() + num);
    if (arr.empty()) arr.push_back(-1);
    return arr;
}