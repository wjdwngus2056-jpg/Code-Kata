#include <vector>
#include <iostream>
using namespace std;

int solution(vector<int> nums) {
    int answer = -1;
    vector<int> sums;
    int count = 0;
    
    for (size_t i = 0; i < nums.size(); i++)
    {
        for (size_t j = i + 1; j < nums.size(); j++)
        {
            for (size_t k = j + 1; k < nums.size(); k++)
            {
                int sum = nums[i] + nums[j] + nums[k];
                sums.push_back(sum);
            }
        }
    }
    
    for (int s : sums)
    {
        bool isPrime = true;
        for (int i = 2; i < s; i++)
        {
            if (s % i == 0)
            {
                isPrime = false;
            }
        }
        if (isPrime)
        {
            count++;
        }
    }

    answer = count;
    return answer;
}