#include <string>
#include <vector>

using namespace std;

int GCD(int a, int b)
{
    while (b != 0)
    {
        int temp = a % b;
        a = b;
        b = temp;
    }
    return a;
}
    
int LCM(int a, int b)
{
    return a / GCD(a, b) * b;
}

int solution(vector<int> arr) {
    int answer = 0;
    
    int LCMtemp = LCM(arr[0], arr[1]);
    
    for (int i = 2; i < arr.size(); i++)
    {
        LCMtemp = LCM(LCMtemp, arr[i]);
    }
    
    answer = LCMtemp;
    
    return answer;
}