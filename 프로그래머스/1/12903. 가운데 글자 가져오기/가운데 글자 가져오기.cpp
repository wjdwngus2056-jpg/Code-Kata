#include <string>
#include <vector>

using namespace std;

string midstr(const string& str)
{
    string mid_str = ""; 
    if (str.length() % 2 == 0)
    {
        mid_str += str[(str.length()/2) - 1];
        mid_str += str[str.length()/2];
    }
    else
    {
        mid_str = str[str.length()/2];
    }
    return mid_str;
}

string solution(string s) {
    string answer = "";
    answer = midstr(s);
    return answer;
}