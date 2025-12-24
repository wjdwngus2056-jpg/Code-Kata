#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    
    for (const char& str : my_string)
    {
        if (isdigit(str) != 0)
        {
            answer += str - '0';
        }
    }
    
    return answer;
}