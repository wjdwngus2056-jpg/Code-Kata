#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    
    for (int i = 0; i <= discount.size()-10; i++)
    {
        map<string, int> get;
        
        for (int j = i; j < i + 10; j++)
        {
            get[discount[j]]++;
        }
        
        bool bRegister = true;
        
        for (int k = 0; k < want.size(); k++)
        {
            if (get[want[k]] != number[k])
            {
                bRegister = false;
            }
        }
        
        if (bRegister == true)
        {
            answer++;
        }
    }
    
    return answer;
}