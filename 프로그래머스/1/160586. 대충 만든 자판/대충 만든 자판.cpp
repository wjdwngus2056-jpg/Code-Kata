#include <string>
#include <vector>
#include <map>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    map<char, int> mapping;
    
    for (const string& s : keymap)
    {
        for (int i = 0; i < s.length(); i++)
        {
            if (mapping.find(s[i]) == mapping.end())
            {
                mapping[s[i]] = i+1;
            }
            else if (mapping.find(s[i]) != mapping.end() && mapping[s[i]] > i+1)
            {
                mapping[s[i]] = i+1;
            }
        }
    }
    
    for (const string& s : targets)
    {
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (mapping.find(s[i]) == mapping.end())
            {
                count = -1;
                break;
            }
            else
            {
                count += mapping[s[i]];
            }
        }
        
        if (count != 0)
        {
            answer.push_back(count);
        }
    }
    
    return answer;
}