#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for (int i = 1; i <= number; i++)
    {
        int weapon_power = 0;
        for (int j = 1; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                if (j == sqrt(i))
                {
                    weapon_power++;
                }
                else
                {
                    weapon_power += 2;
                }
            }
        }
        if (weapon_power <= limit)
        {
            answer+=weapon_power;
        }
        else
        {
            answer+=power;
        }
    }
    
    return answer;
}