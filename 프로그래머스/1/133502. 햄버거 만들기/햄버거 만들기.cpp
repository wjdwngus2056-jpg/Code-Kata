#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> ing_stack;
    
    for (int ing : ingredient)
    {
        ing_stack.push_back(ing);
        
        if (ing_stack.size() >= 4 && 
            ing_stack[ing_stack.size()-4] == 1 && 
            ing_stack[ing_stack.size()-3] == 2 && 
            ing_stack[ing_stack.size()-2] == 3 && 
            ing_stack[ing_stack.size()-1] == 1)
        {
            for (int i = 0; i < 4; i++)
            {
                ing_stack.pop_back();
            }
            
            answer++;
        }
    }
    
    return answer;
}