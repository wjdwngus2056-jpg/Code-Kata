#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    vector<int> dh = {0, 1, -1, 0};
    vector<int> dw = {1, 0, 0, -1};
    
    for (int i = 0; i < 4; i++)
    {
        int h_check = h+dh[i];
        int d_check = w+dw[i];
        
        if (h_check >= 0 && h_check < board.size() && d_check >= 0 && d_check < board.size())
        {
            if (board[h][w] == board[h_check][d_check])
            {
                answer++;
            }   
        }
    }
    
    return answer;
}