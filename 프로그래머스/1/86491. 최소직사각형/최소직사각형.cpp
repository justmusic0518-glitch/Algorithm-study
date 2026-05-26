#include <algorithm>
#include <string>
#include <vector>

using namespace std;

/*
1.  반복문 전에 최대 가로, 세로 길이를 뽑는다. int maxWidth, maxLength
2.  tempSize = maxWidth x maxLength; 로 저장해둔다.
3.  if(maxWidth >= maxLength && 찾은 최대 width의 원소 > length 원소) Swap(width, length)
    if(maxWidth <= maxLength && width 원소 < 찾은 최대 length의 원소) Swap (width, length)
    중복된 값은 같이 Swap한다. for로 돌려서 모든 중복된값을 예외 처리.
4.  최대 가로, 세로길이를 다시 찾고 maxWidth, maxLength를 다시 설정한다.
5.  while(tempSize != maxWidth x maxLength)로 설정해두고 
    초반에 tempSize = maxWidth x maxLength로 갱신
6.  끝나면 return tempSize;
*/

int solution(vector<vector<int>> sizes) {
    int maxWidth = 0, maxLength = 0, tempSize = 0;
    
    for (auto& size : sizes)
    {
        if (size[0] < size[1])
            swap(size[0], size[1]);
        maxWidth = std::max(size[0], maxWidth);
        maxLength = std::max(size[1], maxLength);
    }
    
    return maxWidth * maxLength;
}