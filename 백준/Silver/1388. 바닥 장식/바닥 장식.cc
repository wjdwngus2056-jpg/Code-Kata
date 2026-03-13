#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int N, M;
    int answer = 0;
    char floor[51][51];
    
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> floor[i][j];
        }
    }
    
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (floor[i][j] == '-')
            {
                if (floor[i][j+1] != '-' || j == M)
                {
                    answer++;
                }
            }
            else if (floor[i][j] == '|')
            {
                if (floor[i+1][j] != '|' || i == N)
                {
                    answer++;
                }
            }
        }
    }
    
    cout << answer;
    
    return 0;
}