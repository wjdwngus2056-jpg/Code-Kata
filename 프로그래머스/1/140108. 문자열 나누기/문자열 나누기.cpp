#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    char x = s[0];
    int chunk_div = 1;
    int count_x = 0;
    int count_nx = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (count_x == count_nx && count_x != 0 && count_nx != 00)
        {
            x = s[i];
            chunk_div++;
        }
        
        if (s[i] == x)
        {
            count_x++;
        }
        else
        {
            count_nx++;
        }
    }
    answer = chunk_div;
    return answer;
}