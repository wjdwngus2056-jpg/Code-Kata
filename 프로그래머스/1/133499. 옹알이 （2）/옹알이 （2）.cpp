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
            if (s.substr(i, 3) == "aya" && check != 0)
            {
                check = 0;
                i += 2;
            }
            else if (s.substr(i, 2) == "ye" && check != 1)
            {
                check = 1;
                i += 1;
            }
            else if (s.substr(i, 3) == "woo" && check != 2)
            {
                check = 2;
                i += 2;
            }
            else if (s.substr(i, 2) == "ma" && check != 3)
            {
                check = 3;
                i += 1;
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