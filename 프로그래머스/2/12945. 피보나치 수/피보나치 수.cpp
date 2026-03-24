#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    int Fibo[100001];
    Fibo[0] = 0;
    Fibo[1] = 1;
    
    for (int i = 2; i <= n; i++)
    {
        Fibo[i] = (Fibo[i-2] + Fibo[i-1]) % 1234567;
    }
    
    answer = Fibo[n];
    
    return answer;
}