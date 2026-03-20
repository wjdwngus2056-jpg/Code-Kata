#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {

    s[0] = toupper(s[0]); 
    
    for (int i = 1; i < s.length(); i++)
    {
        if (islower(s[i]) && s[i-1] == ' ')
        {
            s[i] = toupper(s[i]);
        }
        else if (isupper(s[i]) && s[i-1] != ' ')
        {
            s[i] = tolower(s[i]);
        }
    }
    
    return s;
}