#include <string>
#include <vector>

using namespace std;

void push_num(vector<int>& vec, const long long& n)
{
    long long num = n;
    while (num >= 1)
    {
        vec.push_back(num % 10);
        num = num / 10;
    }
}

vector<int> solution(long long n) {
    vector<int> answer;
    push_num(answer, n);
    return answer;
}