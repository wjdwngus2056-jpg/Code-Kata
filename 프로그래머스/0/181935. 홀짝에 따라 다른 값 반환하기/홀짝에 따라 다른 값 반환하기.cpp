#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    if (n % 2 != 0)
    {
        int sum_odd = 0;
        for (int i = 1; i <= n; i += 2)
        {
            sum_odd += i;
        }
        return sum_odd;
    }
    else
    {
        int sum_even = 0;
        for (int i = 2; i <= n; i += 2)
        {
            sum_even += pow(i, 2);
        }
        return sum_even;
    }
}