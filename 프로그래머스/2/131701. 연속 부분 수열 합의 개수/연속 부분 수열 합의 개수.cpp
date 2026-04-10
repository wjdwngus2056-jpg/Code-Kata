#include <string>
#include <vector>
#include <set>


using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> sumset;
    
    for (int length = 1; length <= elements.size(); length++) 
    {
        int currentsum = 0;
        
        for (int i = 0; i < length; i++)
        {
            currentsum += elements[i];
        }
        sumset.insert(currentsum);
        
        for (int j = 1; j < elements.size(); j++)
        {
            currentsum -= elements[j - 1];
            currentsum += elements[(j+length-1) % elements.size()];
            
            sumset.insert(currentsum);
        }
    }

    answer = sumset.size();
    
    return answer;
}