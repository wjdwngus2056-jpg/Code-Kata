#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> cloth_count(31, 0);
    
    for(int i = 0; i < lost.size(); i++)
    {
        cloth_count[lost[i]]--;
    }
    
    for (int i = 0; i < reserve.size(); i++)
    {
        cloth_count[reserve[i]]++;
    }
    
    for (int i = 1; i <= n; i++)
    {
        if (cloth_count[i] == -1)
        {
            if (cloth_count[i-1] == 1)
            {
                cloth_count[i-1]--;
                cloth_count[i]++;
            }
            else if (cloth_count[i+1] == 1)
            {
                cloth_count[i+1]--;
                cloth_count[i]++;
            }
        }
        
        if (cloth_count[i] >= 0)
        {
            answer++;
        }
    }
    
    return answer;
}