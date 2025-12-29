#include <iostream>
#include <string>

using namespace std;
int solution(int n)
{
    int answer = 0;
    string num = to_string(n);
    
    for (auto x : num)
    {
        answer += x - 48;
    }
    
    return answer;
}