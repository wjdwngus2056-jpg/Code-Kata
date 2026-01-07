#include <string>
#include <iostream>
using namespace std;

int str_find(string str, string c)
{
    for (auto& ch : str)
    {
        if (isupper(ch))
        {
            ch = tolower(ch);
        }
    }
    
    int count = 0;
    size_t pos = 0;
    
    while ((pos = str.find(c, pos)) != string::npos)
    {
        count++;
        pos ++;
    }
    return count;
}

bool solution(string s)
{
    bool answer = true;
    
    int pcount = str_find(s, "p");
    int ycount = str_find(s, "y");
    
    if (pcount == ycount)
    {
        answer = true;
    }
    else
    {
        answer = false;
    }
    
    return answer;
}