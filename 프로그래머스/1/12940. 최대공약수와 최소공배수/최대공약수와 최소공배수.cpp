#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b)
{
    if (a >= b)
    {
        if(a%b == 0)
        {
            return b;
        }
        else
        {
            return GCD(b, a%b);
        }
    }
    else
    {
        if (b%a == 0)
        {
            return a;
        }
        else
        {
            return GCD(a, b%a);
        }
    }
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd, lcm;
    
    gcd = GCD(n, m);
    lcm = n*m/gcd;
    
    answer.push_back(gcd);
    answer.push_back(lcm);
    
    return answer;
}