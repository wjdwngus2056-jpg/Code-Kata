#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    
    for (size_t i = 0; i < numbers.size() - 1; i++)
    {
        for (size_t j = i + 1; j < numbers.size(); j++)
        {
            int sum = numbers[i] + numbers[j];
            answer.push_back(sum);
        }
    }
    
    sort(answer.begin(), answer.end());
    answer.erase(unique(answer.begin(), answer.end()), answer.end());
    
    return answer;
}