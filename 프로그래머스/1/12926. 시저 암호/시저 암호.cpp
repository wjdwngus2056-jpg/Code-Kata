#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for (auto& c : s)
    {
        if (c != ' ')
        {
            if (c >= 'A' && c <= 'Z')
            {
                c += n - 26;
                if (c < 'A')
                {
                    c += 26;
                }
            }
            else if (c >= 'a' && c <= 'z')
            {
                c += n - 26;
                if (c < 'a')
                {
                    c += 26;
                }
            }
        }
    }
    
    answer = s;
    
    return answer;
}