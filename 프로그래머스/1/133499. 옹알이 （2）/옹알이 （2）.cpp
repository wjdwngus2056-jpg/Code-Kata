#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> speakable = {"aya", "ye", "woo", "ma"};
    
    for (string s : babbling)
    {
        int check = -1;
        bool check_canspeak = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s.substr(i, speakable[0].length()) == speakable[0] && check != 0)
            {
                check = 0;
                i += speakable[0].length()-1;
            }
            else if (s.substr(i, speakable[1].length()) == speakable[1] && check != 1)
            {
                check = 1;
                i += speakable[1].length()-1;
            }
            else if (s.substr(i, speakable[2].length()) == speakable[2] && check != 2)
            {
                check = 2;
                i += speakable[2].length()-1;
            }
            else if (s.substr(i, speakable[3].length()) == speakable[3] && check != 3)
            {
                check = 3;
                i += speakable[3].length()-1;
            }
            else
            {
                check_canspeak = false;
            }
        }
        if (check_canspeak == true)
        {
            answer++;
        }
    }
    return answer;
}