#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int sum_abnum(const vector<int>& num)
{
    int sum = 0;
    for (int i = 0; i <= 9; i++)
    {
        if (find(num.begin(), num.end(), i) == num.end())
        {
            sum += i;
        }
    }
    return sum;
}

int solution(vector<int> numbers) {
    int answer = sum_abnum(numbers);
    return answer;
}