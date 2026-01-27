#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    priority_queue<int, vector<int>, greater<int>> HOF;
    for(int i = 0; i < score.size(); i++)
    {
        HOF.push(score[i]);
        if (HOF.size() > k)
        {
            HOF.pop();
        }
        answer.push_back(HOF.top());
    }
    return answer;
}