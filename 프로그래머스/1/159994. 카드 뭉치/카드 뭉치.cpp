#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int index1 = 0;
    int index2 = 0;
    
    for (const string& s : goal)
    {
        if (s == cards1[index1])
        {
            index1++;
        }
        else if (s == cards2[index2])
        {
            index2++;
        }
        else
        {
            answer = "No";
            return answer;
        }
    }
    
    answer = "Yes";
    return answer;
}