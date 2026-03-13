#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

// 1. 회원의 수 N을 받는다.
// 2. 각 회원의 나이와 이름을 받는다.
// 3. 나이가 적은 순으로 , 나이가 같으면 먼저 가입한 사람이 앞으로 정렬
// 4. 출력
struct Info{
    int age;
    string name;
    
    bool operator<(const Info& other) const{
            return this->age < other.age;
    }
};

int main(){
    int n, order;
    
    cin >> n;
    vector<Info> info(n);
    
    for (int i = 0; i < n; ++i)
    {
        cin >> info[i].age >> info[i].name;
    }
    
    stable_sort(info.begin(), info.end());
    
    for (int i = 0; i < n; ++i)
    {
        cout << info[i].age << " " << info[i].name << "\n";
    }
}