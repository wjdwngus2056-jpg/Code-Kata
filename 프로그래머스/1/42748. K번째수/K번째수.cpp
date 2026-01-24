#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<int> temp;
    for (size_t i = 0; i < commands.size(); i++)
    {
        int first = commands[i][0] - 1;
        int second = commands[i][1] - 1;
        int third = commands[i][2] - 1;
        for (int j = first; j <= second; j++)
        {
            temp.push_back(array[j]);
        }
        sort(temp.begin(), temp.end());
        answer.push_back(temp[third]);
        temp.clear();
    }
    return answer;
}