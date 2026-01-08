#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Divisible_Num(const vector<int>& arr, int div)
{
    vector<int> divisible;
    for (const int& num : arr)
    {
        if (num % div == 0)
        {
            divisible.push_back(num);
        }
    }
    if (divisible.empty())
    {
        divisible.push_back(-1);
    }
    return divisible;
}

vector<int> solution(vector<int> arr, int divisor) 
{
    vector<int> answer;
    answer = Divisible_Num(arr, divisor);
    sort(answer.begin(), answer.end());
    
    return answer;
}