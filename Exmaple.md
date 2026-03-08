# Algorithm Study Log

## Beakjun 1316 - 그룹 단어 체커

난이도: Silver V

주소 : https://www.acmicpc.net/problem/1110

### Idea

문자를 왼쪽부터 순회하면서

* 이전 문자와 같으면 계속 진행
* 이전 문자와 다르면

  * 해당 문자가 이미 등장했는지 확인

이미 등장했던 문자가 다시 나오면 그룹 단어가 아니다.

핵심: **문자가 끊겼다가 다시 등장하는 경우 탐지**

---

### Algorithm

1. 단어 하나씩 검사
2. `visited[26]` 배열 준비
3. 문자열 순회
4. 이전 문자와 다르면

   * 이미 등장한 문자인지 확인
5. 이미 등장했다면 실패

---

### Data Structure

* `string`
* `bool visited[26]`

---

### Time Complexity

```
O(M × N)
```

M: 단어 개수
N: 문자열 길이

---

### Pattern

**Visited Array**

등장 여부 / 방문 여부를 기록하는 기본 패턴.

```
bool visited[]
```
