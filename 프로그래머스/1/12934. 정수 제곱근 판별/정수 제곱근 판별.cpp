#include <string>
#include <vector>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    long long x = 1;
    while (true)
    {
        if (x*x > n)
        {
            return -1;
        }
        else if (n == x*x)
        {
            return (x+1)*(x+1);
        }
        x++;
    }
        
    return answer;
}