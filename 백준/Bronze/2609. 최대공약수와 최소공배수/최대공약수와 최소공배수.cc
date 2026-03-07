#include <iostream>

using namespace std;

int GCD(int a, int b)
{
    if (a%b == 0)
    {
        return b;
    }
    
    return GCD(b, a%b);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int a, b;
    cin >> a >> b;
    
    int gcd = a >= b ? GCD(a, b) : GCD(b, a);
    
    cout << gcd << '\n';
    cout << a*b/gcd << '\n';
    
    return 0;
}