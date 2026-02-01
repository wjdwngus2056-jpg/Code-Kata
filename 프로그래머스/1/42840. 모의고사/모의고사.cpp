#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> student1 = {1,2,3,4,5};
    vector<int> student2 = {2,1,2,3,2,4,2,5};
    vector<int> student3 = {3,3,1,1,2,2,4,4,5,5};
    
    vector<int> count(3, 0);
    
    for (size_t i = 0; i < answers.size(); i++)
    {
        if (answers[i] == student1[(i % 5)])
        {
            count[0]++;
        }
        if (answers[i] == student2[(i % 8)])
        {
            count[1]++;
        }
        if (answers[i] == student3[(i % 10)])
        {
            count[2]++;
        }
    }
    
    int max = *max_element(count.begin(), count.end());
    
    for (size_t i = 0; i < count.size(); i++)
    {
        if (count[i] == max)
        {
            answer.push_back(i+1);
        }
    }
    
    return answer;
}