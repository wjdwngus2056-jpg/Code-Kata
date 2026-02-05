#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int correct = 0;
    int zero = 0;
    
    for (const int& choice : lottos)
    {
        if (choice == 0)
        {
            zero++;
        }
        else
        {
            for (const int& win : win_nums)
            {
                if (choice == win)
                {
                    correct++;
                }
            }
        }
    }
    
    int best = 7-(correct+zero);
    if (correct == 0 && zero == 0)
    {
        best = 6;
    }
    int worst = 7-correct;
    if (correct == 0)
    {
        worst = 6;
    }
    
    answer.push_back(best);
    answer.push_back(worst);
    
    return answer;
}