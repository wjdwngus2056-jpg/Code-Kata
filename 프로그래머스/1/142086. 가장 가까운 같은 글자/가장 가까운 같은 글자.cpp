#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    map<char, int> sm;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (sm.find(s[i]) == sm.end())
        {
            answer.push_back(-1);
            sm.insert({s[i], i});
        }
        else
        {
            answer.push_back(i-sm[s[i]]);
            sm[s[i]] = i;
        }
    }
    
    return answer;
}