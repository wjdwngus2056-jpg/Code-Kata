#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    int currentH, currentW;
    
    for (int i = 0; i < park.size(); i++)
    {
        for (int j = 0; j < park[i].length(); j++)
        {
            if (park[i][j] == 'S')
            {
                currentH = i;
                currentW = j;
            }
        }
    }
    
    for (int i = 0; i < routes.size(); i++)
    {
        char dir;
        int move;
        stringstream sr(routes[i]);
        sr >> dir >> move;
        
        bool bIsMoved = true;
        
        switch(dir)
        {
            case 'N':
                for (int i = 1; i <= move; i++)
                {
                    if (currentH-i < 0 || park[currentH-i][currentW] == 'X')
                    {
                        bIsMoved = false;
                        break;
                    }
                }
                if (bIsMoved)
                {
                    currentH -= move;
                }
                bIsMoved = true;
                break;
            case 'S':
                for (int i = 1; i <= move; i++)
                {
                    if (currentH+i > park.size()-1 || park[currentH+i][currentW] == 'X')
                    {
                        bIsMoved = false;
                        break;
                    }
                }
                if (bIsMoved)
                {
                    currentH += move;
                }
                bIsMoved = true;
                break;
            case 'W':
                for (int i = 1; i <= move; i++)
                {
                    if (currentW-i < 0 || park[currentH][currentW-i] == 'X')
                    {
                        bIsMoved = false;
                        break;
                    }
                }
                if (bIsMoved)
                {
                    currentW -= move;
                }
                bIsMoved = true;
                break;
            case 'E':
                for (int i = 1; i <= move; i++)
                {
                    if (currentW+i > park[0].length()-1 || park[currentH][currentW+i] == 'X')
                    {
                        bIsMoved = false;
                        break;
                    }
                }
                if (bIsMoved)
                {
                    currentW += move;
                }
                bIsMoved = true;
                break;
        }
    }
    
    answer.push_back(currentH);
    answer.push_back(currentW);
    
    return answer;
}