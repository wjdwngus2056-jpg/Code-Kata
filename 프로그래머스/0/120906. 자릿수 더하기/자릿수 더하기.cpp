#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> vecNum;
    int num = n;
    
    while (num > 0)
    {
        vecNum.push_back(num % 10);
        num = (num-(num%10))/10;
    }
    
    for (auto n : vecNum)
    {
        answer += n;
    }
    
    return answer;
}