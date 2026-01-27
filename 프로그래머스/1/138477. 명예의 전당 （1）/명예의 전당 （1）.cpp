#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> HOF;
    
    for (size_t i = 0; i < score.size(); i++)
    {
        if (HOF.size() < k)
        {
            HOF.push_back(score[i]);
            sort(HOF.begin(), HOF.end(), [](int a, int b){ return a > b; });
            int min = *min_element(HOF.begin(), HOF.end());
            answer.push_back(min);
        }
        else
        {
            HOF.push_back(score[i]);
            sort(HOF.begin(), HOF.end(), [](int a, int b){ return a > b; });
            HOF.pop_back();
            int min = *min_element(HOF.begin(), HOF.end());
            answer.push_back(min);
        }
    }
    
    return answer;
}