#include <string>
#include <vector>
#include <set>

using namespace std;

long long sumAtoB(int numA, int numB)
{
    long long sum = 0;
    if (numA <= numB)
    {
        for (int num = numA; num <= numB; num++)
        {
            sum += num;
        }
        return sum;
    }
    else
    {
        for (int num = numB; num <= numA; num++)
        {
            sum+= num;
        }
        return sum;
    }
}

long long solution(int a, int b) {
    long long answer = 0;
    answer = sumAtoB(a, b);
    return answer;
}