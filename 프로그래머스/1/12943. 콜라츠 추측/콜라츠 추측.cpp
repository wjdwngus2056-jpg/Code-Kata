#include <string>
#include <vector>

using namespace std;

int Collatz(int n)
{
    int count = 0;
    if (n == 1)
    {
        return 0;
    }
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            count++;
            n = n/2;
        }
        else
        {
            count++;
            n = n * 3 + 1;
        }
    }
    if(n != 1 || count == 500)
    {
        return -1;
    }
    return count;
}


int solution(int num) {
    int answer = 0;
    answer = Collatz(num);
    return answer;
}