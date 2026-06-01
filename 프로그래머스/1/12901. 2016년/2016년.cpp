#include <string>
#include <vector>

using namespace std;

/*
*1. a월 b일이 들어온다.
2. a월 전까지의 모든 날짜 수를 더한다.
3. 거기에 b - 1을 더한다.
4. 그 값을 7로 나눈 나머지를 구한다.
5. 요일 배열에서 꺼낸다.
*/


string solution(int a, int b) {    
    int temp = 0;
    
    const vector<int> months = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const vector<string> days = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    
    for (int i = 0; i < a - 1; ++i)
    {
        temp += months[i];
    }
    
    temp += b - 1;

    return days[temp % days.size()]; 
}