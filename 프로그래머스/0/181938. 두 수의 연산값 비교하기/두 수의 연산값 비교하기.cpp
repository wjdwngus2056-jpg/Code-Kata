#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int a, int b) {
    int answer = 0;
    string B = to_string(b);
    int sizeB = B.length();
        
    int res1 = (a * pow(10, sizeB)) + b;
    int res2 = 2*a*b;
    
    if(res1 > res2)
    {
        return res1;
    }
    else if (res1 < res2)
    {
        return res2;
    }
    else
    {
        return res1;
    }
}