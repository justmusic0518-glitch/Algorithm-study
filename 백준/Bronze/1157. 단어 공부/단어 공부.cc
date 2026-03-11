#include <iostream>
#include <vector>
#include <string>

using namespace std;

// 1. 알파벳 대소문자로 된 단어를 받는다.
// 2. 이 단어에서 가장 많이 사용된 알파벳이 무엇인지 확인한다. (대소문자 구분 X)
// 3. 가장 많이 사용된 알파벳이 여러 개 존 재하는 경우 ? 출력 ( 2개 이상 일 경우 )
// 4. 가장 많이 사용된 알파벳을 출력한다.
int main(){
    string word;
    int count[26] = {0};
    
    cin >> word;
    
    for (int i = 0; i < word.length(); ++i)
    {
        char c = word[i];              // 원본 데이터를 저장 해놓기 위해서 c에 값 복사
        if (c >= 'a' && c <= 'z')      //  a ~ z 까지 만약 대문자이면 그냥 두기
            c -= 32;                   // 아스키 코드 -32가 대문자래
        ++count[c - 'A'];
    }
    // 1. 배열중 가장 큰 값을 찾는다.
    // 2. 큰 값을 찾고 중복 되는게 있으면 체크 ++count
    // 5. count가 count < 2 이면 해당 문자 출력 , count가 > 1 , 0 >= count이면 ? 
    int max = 0;
    int num = 0;
    for (int i = 1; i < 26; ++i)
    {
        if (count[num] < count[i])
            num = i;
    }
    // cout << count[num] << endl;
    for (int i = 0; i < 26; ++i)
    {
        if (count[num]==count[i])
            ++max;
    }
    if (max < 2)
    {
        cout << (char)(num + 65) << endl;
    }
    else
    {
        cout << "?\n";
    }
}
