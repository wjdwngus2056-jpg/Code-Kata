#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int Zero_count = 0;
int Conv_count = 0;

void BinaryConv(string s)
{
    Conv_count++;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s.erase(s.begin()+i);
            Zero_count++;
            i--;
        }
    }
    
    string Conv = "";
    int num = s.length();
    while(num > 0)
    {
        Conv += to_string(num%2);
        num = num/2;
    }
    reverse(Conv.begin(), Conv.end());
    
    if (Conv != "1")
    {
        BinaryConv(Conv);
    }
}

vector<int> solution(string s) {
    vector<int> answer;
    
    BinaryConv(s);
    answer.push_back(Conv_count);
    answer.push_back(Zero_count);
    
    return answer;
}