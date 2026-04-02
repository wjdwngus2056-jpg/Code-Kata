#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    
    long long Jump[2001];
    Jump[1] = 1;
    Jump[2] = 2;
    
    for (int i = 3; i <= n; i++)
    {
        Jump[i] = (Jump[i-1] + Jump[i-2]) % 1234567;
    }
    
    answer = Jump[n];
    return answer;
}