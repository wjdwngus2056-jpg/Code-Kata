#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b)
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

vector<int> solution(int n, int m) {
    vector<int> answer;
    int gcd, lcm;
    
    n >= m ? gcd = GCD(n, m) : gcd = GCD(m, n);
    lcm = n*m/gcd;
    
    answer.push_back(gcd);
    answer.push_back(lcm);
    
    return answer;
}