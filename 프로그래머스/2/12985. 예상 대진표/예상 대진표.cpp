#include <iostream>
#include <unordered_map>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 1;
    int RoundA = (a+1)/2;
    int RoundB = (b+1)/2;
    
    while (RoundA != RoundB)
    {
        RoundA = (RoundA+1)/2;
        RoundB = (RoundB+1)/2;
        answer++;
    }

    return answer;
}