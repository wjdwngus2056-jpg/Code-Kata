#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    for (int i = 0; i < t.length()-(p.length()-1); i++)
    {
        string num = "";
        for (int j = 0; j < p.length(); j++)
        {
            num += t[i+j];
        }
        if(stol(num) <= stol(p))
        {
            answer++;
        }
    }
    
    return answer;
}