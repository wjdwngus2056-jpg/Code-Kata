#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int, int> count;
    vector<int> arr;
    
    for (int t : tangerine) 
    {
        count[t]++;
    }
    
    for (auto it : count) 
    {
        arr.push_back(it.second);
    }
    
    sort(arr.begin(), arr.end(), greater<int>());
    
    int sum = 0;
    
    for (int x : arr) 
    {
        sum += x;
        answer++;
        if (sum >= k) 
        {
            break;
        }
    }
    
    return answer;
}