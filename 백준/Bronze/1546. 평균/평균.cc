#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int subInfo(int N){ return 0; }

int main(){
    // 1. 과목의 개수 N을 받는다.
    // 2. N의 과목 중 최댓값 MAX를 고른다.
    // 3. 모든 score를 score / MAX * 100으로 고친다
    // 4. 평균을 상대오차 10의-2만큼 낸다.
    int N; // 시험 본 과목의 개수 

    double average = 0;
    
    cin >> N;

    vector<double> arr(N);
    for (int i = 0; i < N; i++) { cin >> arr[i]; }
    double MAX = arr[0];
    for (int i = 0; i < N; i++)
    {
        MAX = MAX < arr[i] ? arr[i] : MAX;
    }
    for (int i = 0; i < N; i++)
    {
        arr[i] = arr[i] / MAX * 100;
    } // 점수 조작
    for (int i = 0; i < N; i++)
    {
        average += arr[i]; 
    }

    average /= N; 
    cout << fixed << setprecision(10) << average << endl;
}
