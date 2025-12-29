#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    
    float fnum1 = num1;
    float fnum2 = num2;
    float div = fnum1 / fnum2;
    
    answer = static_cast<int>(div*1000);
    
    return answer;
}