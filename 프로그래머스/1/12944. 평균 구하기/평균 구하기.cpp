#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    double sum = 0;
    
    for (int n : arr)
    {
        sum += n;
    }
    
    answer = sum / arr.size();
    return answer;
}