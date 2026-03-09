#include <iostream>
#include <string>

using namespace std;

void solution(int &num1, int &N){
    // 1. 10의자리 숫자와 1의 자리 숫자를 분리한다. (10보다 작으면 10을 곱한다)
    // 10의자리 숫자를 x, 1의 자리 숫자를 y라고 한다.
    // 2. 10자리 숫자와 1자리 숫자를 더한다.
    // 3. 1의 자리 숫자를 앞에 쓰고 10의 자리숫자를 뒤에 쓴다.
    // 4. 계속 이렇게 해서 다시 원래 수로 돌아오는 사이클의 길이를 N이라고 한다.

    int x = num1 / 10;     // 10 의 자리 숫자
    int y = num1 - x * 10; // 1의 자리 숫자 
    
    num1 = x + y;
    
    if (num1 >= 10) // 10보다 크거나 같으면 1의 자리 숫자만 반환 
    {
        x = num1 / 10;
        num1 -= x * 10; // num1이 y를 대신함 y는 앞에 와야하기 때문임
    }

    num1 += y * 10; // 3. 1의 자리 숫자 num를 뒤에 쓰고 10의 자리 숫자 y를 앞에 쓴다.
    ++N;                  // num1 = 5, y = 4 라면 45, N 횟수 증가 
}

int main(){
    int num1;
    int N = 0;

    cin >> num1;
    if (num1 < 10) { num1 *= 10;}
    
    int num2 = num1;
    
    solution(num1, N);           // num 1 != num2 이기 위한 한번 돌리고 들가기
    
    while (num2 != num1)
    {
        solution(num1, N);
    }
    
    cout << N;
}