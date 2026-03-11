#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int drag[4] = {51, 51, 0 , 0};
    
    for (int i = 0; i < wallpaper.size(); i++)
    {
        for (int j = 0; j < wallpaper[i].length(); j++)
        {
            if (wallpaper[i][j] == '#')
            {
                if (drag[0] >= i) drag[0] = i;
                if (drag[1] >= j) drag[1] = j; 
                if (drag[2] <= i+1) drag[2] = i+1;
                if (drag[3] <= j+1) drag[3] = j+1; 
            }
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        answer.push_back(drag[i]);
    }
    
    return answer;
}