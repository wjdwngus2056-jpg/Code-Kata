#include <string>
#include <vector>
#include <cctype>

using namespace std;

bool solution(string s) {
    bool answer = true;
    for (const auto& e : s)
    {
        if(!isdigit(e))
        {
            return false;
        }
    }
    s.length() == 4 || s.length() == 6 ? answer = true : answer = false;
    return answer;
}