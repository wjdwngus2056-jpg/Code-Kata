#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    unordered_set<char> skips (skip.begin(), skip.end());
    
    for (char c : s)
    {
        char current_char = c;
        int count = 0;
        while (count < index)
        {
            current_char++;
            if (current_char > 'z')
            {
                current_char = 'a';
            }
            if (skips.find(current_char) == skips.end())
            {
                count++;
            }
        }
        answer += current_char;
    }
    
    return answer;
}