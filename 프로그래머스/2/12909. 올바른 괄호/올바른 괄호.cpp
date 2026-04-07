#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string s)
{
    bool answer = false;
    stack<char> stack_s;
    
    for (char c : s)
    {
        if (stack_s.empty())
        {
            stack_s.push(c);
        }
        else if (c == '(')
        {
            stack_s.push(c);
        }
        else if (c == ')' && stack_s.top() == '(')
        {
            stack_s.pop();
        }
    }
    
    if (stack_s.empty())
    {
        answer = true;
    }
    
    return answer;
}