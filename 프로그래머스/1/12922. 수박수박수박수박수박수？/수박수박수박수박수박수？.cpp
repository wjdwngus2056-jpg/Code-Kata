#include <string>
#include <vector>

using namespace std;

string solution(int n) {
    string answer = "";
    int count = 1;
    while (count <= n)
    {
        count % 2 != 0 ? answer+= "수" : answer += "박";
        count++;
    }
    
    return answer;
}