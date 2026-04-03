#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int num = 0;
    int copyX = x;
    for(int i = 0; copyX != 0; ++i){
        num += copyX % 10;
        copyX /= 10;
    }

    if (x % num == 0)
        return true;
    else 
        return false;
}
