#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int min(vector<int> vec)
{
    sort(vec.begin(), vec.end());
    return vec[0];
}

vector<int> solution(vector<int> arr) { 
    arr.erase(find(arr.begin(), arr.end(), min(arr)));
    if(arr.empty())
    {
        arr.push_back(-1);
    }
    return arr;
}