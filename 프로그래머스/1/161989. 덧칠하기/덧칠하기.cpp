#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int lastpainted = 0;
    
    for (size_t i = 0; i < section.size(); i++)
    {
        if (section[i] > lastpainted)
        {
            answer++;
            lastpainted = section[i]+m-1;
        }
    }
    
    return answer;
}