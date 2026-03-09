#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    map<char, int> surveymap;
    
    for (int i = 0; i < survey.size(); i++)
    {
        if (choices[i] < 4)
        {
            surveymap[survey[i][0]] += 4 - choices[i];
        }
        else if (choices[i] > 4)
        {
            surveymap[survey[i][1]] += choices[i] - 4;
        }
    }
    
    answer += surveymap['R'] >= surveymap['T'] ? "R" : "T";
    answer += surveymap['C'] >= surveymap['F'] ? "C" : "F";
    answer += surveymap['J'] >= surveymap['M'] ? "J" : "M";
    answer += surveymap['A'] >= surveymap['N'] ? "A" : "N";
    
    return answer;
}