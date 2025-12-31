#include <string>
#include <vector>

using namespace std;

int JudgeAngle(int angle_) 
{
    if (angle_ > 0 && angle_ < 90)
    {
        return 1;
    }
    else if(angle_ == 90)
    {
        return 2;
    }
    else if(angle_ > 90 && angle_ < 180)
    {
        return 3;
    }
    else if(angle_ == 180)
    {
        return 4;
    }
}

int solution(int angle) {
    int answer = 0;
    answer = JudgeAngle(angle);
    
    return answer;
}