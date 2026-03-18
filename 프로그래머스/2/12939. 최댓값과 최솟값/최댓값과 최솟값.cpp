#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string s) {
    string answer = "";
    int min;
    int max = 0;
    bool bIsFirst = true;
    
    int num;
    stringstream ss(s);
    while (ss >> num)
    {        
        if (bIsFirst)
        {
            min = num;
            max = num;
            bIsFirst = false;
        }
        
        if (num < min)
        {
            min = num;
        }
        else if (num > max)
        {
            max = num;
        }
        
    }
    
    answer += to_string(min) + ' ';
    answer += to_string(max);
    return answer;
}