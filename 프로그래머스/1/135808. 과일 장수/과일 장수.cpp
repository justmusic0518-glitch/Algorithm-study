#include <algorithm>
#include <string>
#include <vector>

using namespace std;

// 목표 : 최대 점수 k, 상자에 담아야하는 개수 m, 사과의 개별 점수 score, 임의로 최저 스코어 사과를 p
// 1. sort(score)
// 2. for(int i = m - 1; i < score.size(); i + m) answer += m * score[i] 
//  return p * m * (score / m) = 최저스코어 * 사과 개수 * 사과상자 개수 


int solution(int k, int m, vector<int> score) {
    int answer = 0;
    
    sort(score.begin(), score.end(), greater<>());
    
    for (int i = m - 1; i < score.size();)
    {
        answer += m * score[i];
        i += m;
    }
    
    return answer;
}