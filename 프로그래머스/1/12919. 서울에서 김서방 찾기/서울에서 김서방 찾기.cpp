#include <string>
#include <vector>

using namespace std;

string Find_Kim(const vector<string>& seoul)
{
    for(size_t i = 0; i < seoul.size(); i++)
    {
        if(seoul[i] == "Kim")
        {
            return "김서방은 " + to_string(i) + "에 있다";
        }
    }
}

string solution(vector<string> seoul) {
    string answer = "";
    answer = Find_Kim(seoul);
    return answer;
}