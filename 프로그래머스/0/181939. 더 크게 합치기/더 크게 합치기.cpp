#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string A = to_string(a);
    string B = to_string(b);
    int lenA = A.length();
    int lenB = B.length();
    
    int ans1 = (a*pow(10, lenB)) + b;
    int ans2 = (b*pow(10, lenA)) + a;
    
    if(ans1 > ans2)
    {
        return ans1;
    }
    else if(ans1 < ans2)
    {
        return ans2;
    }
    else
    {
        return ans1;
    }
}