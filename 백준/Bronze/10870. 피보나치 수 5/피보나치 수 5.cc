#include <iostream>

using namespace std;

int solution(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n <= 2)
    {
        return 1;
    }
    
    return solution(n-1)+solution(n-2);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N;
    cin >> N;
    
    cout << solution(N);
    
    return 0;
}