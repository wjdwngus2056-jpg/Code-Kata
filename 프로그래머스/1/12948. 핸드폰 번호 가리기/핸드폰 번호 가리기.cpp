#include <string>
#include <vector>

using namespace std;

void replace(string& number)
{
    for (int i = 0; i < number.length() - 4; i++)
    {
        number[i] = '*'; 
    }
}

string solution(string phone_number) {
    string answer = "";
    replace(phone_number);
    answer = phone_number;
    return answer;
}