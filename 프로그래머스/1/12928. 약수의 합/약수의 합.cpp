#include <string>
#include <vector>

using namespace std;

int factor_sum(const int& num)
{
    int num_temp = num;
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num_temp % i == 0)
        {
            sum += i;
        }
    }
    return sum;
}

int solution(int n) {
    int answer = 0;
    answer = factor_sum(n);
    return answer;
}