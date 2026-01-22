#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> word = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    vector<string> numword = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};
    
    for (size_t i = 0; i < word.size(); i++)
    {
        while (s.find(word[i]) != string::npos)
        {
            s.replace(s.find(word[i]), word[i].length(), numword[i]);
        }
    }
    
    answer = stol(s);
    
    return answer;
}