#include <string>
#include <vector>

using namespace std;

int sumPlaceValue(int num)
{
    int sum = 0;
    while (num > 1)
    {
        sum += num % 10;
        num = num / 10;
    }
    sum += num;
    return sum;
}

bool solution(int x) {
    bool answer = true;
    int sumPlaceX = sumPlaceValue(x);
    if (x % sumPlaceX != 0)
    {
        answer = false;
    }
    return answer;
}