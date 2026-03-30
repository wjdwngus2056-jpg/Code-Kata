#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    for (int h = 1; h <= yellow; h++)
    {
        if (yellow % h != 0)
        {
            continue;
        }
        
        int w = yellow / h;
        
        int Width = w + 2;
        int Height = h + 2;
        
        if (2 * Width + 2 * Height - 4 == brown)
        {
            if (Width >= Height)
            {
                answer.push_back(Width);
                answer.push_back(Height);
            }
            else
            {
                answer.push_back(Height);
                answer.push_back(Width);
            }
            break;
        }
    }
    
    return answer;
}