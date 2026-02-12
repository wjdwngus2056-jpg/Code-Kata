#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    map<char, int> mapping;
    
    for (const char& xc : X)
    {
        mapping[xc]++;
    }
    
    for (const char& yc : Y)
    {
        if (mapping[yc] != 0)
        {
            answer += yc;
            mapping[yc]--;
        }
    }
    
    sort(answer.begin(), answer.end(), greater<char>());
    if (answer == "")
    {
        answer = "-1";
    }
    if (answer.find_first_not_of('0') == string::npos)
    {
        answer = "0";
    }
    
    return answer;
}