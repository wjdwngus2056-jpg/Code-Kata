#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    vector<int> width;
    vector<int> height;
    
    for (vector<int>& wh : sizes)
    {
        if(wh[0] < wh[1])
        {
            swap(wh[0], wh[1]);
        }
        width.push_back(wh[0]);
        height.push_back(wh[1]);
    }
    
    int max_width = *max_element(width.begin(), width.end());
    int max_height = *max_element(height.begin(), height.end());
    answer = max_width*max_height;
    return answer;
}