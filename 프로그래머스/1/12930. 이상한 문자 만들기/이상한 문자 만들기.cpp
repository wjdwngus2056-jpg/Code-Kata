#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int word_idx = 0;
    
    for (size_t i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            answer += " ";
            word_idx = 0;
        }
        else
        {
            if (word_idx % 2 == 0)
            {
                answer += toupper(s[i]);
                word_idx++;
            }
            else
            {
                answer += tolower(s[i]);
                word_idx++;
            }
        }
    }
    
    return answer;
}