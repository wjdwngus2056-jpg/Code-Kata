#include <string>
#include <vector>

using namespace std;

int sum_special(const vector<int>& Num, vector<bool>& Sign)
{
    int sum = 0;
    for (size_t i = 0; i < Num.size(); i++)
    {
        if (Sign[i] == true)
        {
            sum += Num[i];
        }
        else
        {
            sum -= Num[i];
        }
    }
    return sum;
}

int solution(vector<int> absolutes, vector<bool> signs) {
    int answer = 123456789;
    answer = sum_special(absolutes, signs);
    return answer;
}