#include <string>
#include <vector>

using namespace std;

void increase(vector<long long>& vec, const int& x, const int& n)
{
    for (int i = 1; i <= n; i++)
    {
        vec.push_back(x*i);
    }
}

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    increase(answer, x, n);
    return answer;
}