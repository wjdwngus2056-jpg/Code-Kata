#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> ternary;
    
    while (n)
    {
        ternary.push_back(n % 3);
        n = (n-(n%3))/3;
    }
    
    reverse(ternary.begin(), ternary.end());
    
    for (size_t i = 0; i < ternary.size(); i++)
    {
        answer += ternary[i]*pow(3, i);
    }
    
    return answer;
}