#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    for(int num = left; num <= right; num++)
    {
        int s = sqrt(num);
        if (sqrt(num) == s)
        {
            answer -= num;
        }
        else
        {
            answer += num;
        }
    }
    return answer;
}