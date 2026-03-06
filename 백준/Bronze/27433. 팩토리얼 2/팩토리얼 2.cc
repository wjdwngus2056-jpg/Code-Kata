#include <iostream>

using namespace std;

long long solution(int num)
{  
    if (num == 0)
    {
        return 1;
    }
    
    return num * solution(num-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N;
    cin >> N;
    
    cout << solution(N);
    
    return 0;
}