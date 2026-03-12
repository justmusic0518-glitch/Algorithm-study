#include <algorithm>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool compareDistance(string a, string b){
    if (a.length() == b.length())
    {
        for (int i = 0; i < a.length(); ++i)
        {
            if (a==b || a[i] > b[i])
                return false;
            if (a[i] < b[i])
                return true;
        }
    }
    else if (a.length() > b.length())
        return false;
    else
        return true;
}

int main(){
    /* 길이가 짧은 것부터
     * 길이가 같으면 사전 순으로
     * 중복된 단어는 하나만 남기고 제거 */
    // 1. 단어의 개수는 얼마로 할건지 N을 받음.
    // 2. N만큼 단어를 입력 받음
    // 3. 길이가 짧은 걸로 정렬
    //    길이가 같으면 사전 순으로
    //    중복된 단어는 하나만 남기고 제거
    int n;
    
    cin >> n;
    vector<string> word(n);

    for (int i = 0; i < n; ++i)
    {   
        cin >> word[i];
    }
    
    sort(word.begin(), word.end(), compareDistance);
    
    for (int i = 0; i < n; ++i)
    {   
        if (i == 0 || word[i-1] != word[i])
            cout << word[i] << endl;
    }
}