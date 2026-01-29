#include <string>
#include <vector>
#include <deque>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    deque<int> food_arr;
    
    food_arr.push_back(0);
    
    for (int i = food.size()-1; i > 0; i--)
    {
        for (int j = 0; j < food[i]/2; j++)
        {
            food_arr.push_front(i);
            food_arr.push_back(i);
        }
    }
    for (const int& dish : food_arr)
    {
        answer += to_string(dish);
    }
    
    return answer;
}