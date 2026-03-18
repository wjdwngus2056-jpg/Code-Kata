#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct num
{
    string num;
    int strike;
    int ball;
};

int N;
int answer = 0;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    vector<num> InNums(N);

    for (int i = 0; i < N; i++)
    {
        cin >> InNums[i].num >> InNums[i].strike >> InNums[i].ball;
    }

    for (int i = 123; i <= 987; i++)
    {
        string tempnum = to_string(i);

        if (tempnum[0] == tempnum[1] || tempnum[0] == tempnum[2] || tempnum[1] == tempnum[2])
        {
            continue;
        }
        if (tempnum[0] == '0' || tempnum[1] == '0' || tempnum[2] == '0')
        {
            continue;
        }


        bool IsPossibleNum = true;
        for (int j = 0; j < InNums.size(); j++)
        {
            int tempstrike = 0;
            int tempball = 0;
            for (int k = 0; k < 3; k++)
            {
                for (int l = 0; l < 3; l++)
                {
                    if (tempnum[k] == InNums[j].num[l])
                    {
                        if (k == l)
                        {
                            tempstrike++;
                        }
                        else
                        {
                            tempball++;
                        }
                    }
                }
            }

            if (tempstrike != InNums[j].strike || tempball != InNums[j].ball)
            {
                IsPossibleNum = false;
            }
        }

        if (IsPossibleNum)
        {
            answer++;
        }
    }

    cout << answer;

    return 0;
}