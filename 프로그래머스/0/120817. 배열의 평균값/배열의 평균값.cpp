#include <string>
#include <vector>

using namespace std;

double avg(const vector<int>& num)
{
    double sum;
    for (const int n : num)
    {
        sum += n;
    }
    return sum / num.size();
}

double solution(vector<int> numbers) {
    double answer = 0;
    answer = avg(numbers);
    return answer;
}