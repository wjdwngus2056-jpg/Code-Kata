#include <string>
#include <vector>
#include <cmath>

using namespace std;

int attach(vector<int>& vec)
{
    int attachNum = 0;
    for (int i = 0; i < vec.size(); i++)
    {
        attachNum += vec[i]*pow(10, vec.size()-(i+1));
    }
    return attachNum;
}

int solution(vector<int> num_list) {
    int answer = 0;
    vector<int> odd;
    vector<int> even;
    
    for (int i = 0; i < num_list.size(); i++)
    {
        if (num_list[i] % 2 != 0)
        {
            odd.push_back(num_list[i]);
        }
        else
        {
            even.push_back(num_list[i]);
        }
    }
    
    answer = attach(odd) + attach(even);
    return answer;
}