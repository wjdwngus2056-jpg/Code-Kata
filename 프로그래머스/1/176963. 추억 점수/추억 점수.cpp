#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    map<string, int> MNY;
    
    for (int i = 0; i < name.size(); i++)
    {
        MNY[name[i]] = yearning[i];
    }
    
    for (const auto& vec : photo)
    {
        int sum = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            sum += MNY[vec[i]];
        }
        answer.push_back(sum);
    }
    
    return answer;
}