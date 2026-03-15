#include <string>
#include <vector>
#include <map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string, int> ranking;
    
    for (int i = 0; i < players.size(); i++)
    {
        ranking[players[i]] = i + 1;
    }
    
    for (int i = 0; i < callings.size(); i++)
    {
        int current = ranking[callings[i]];
        
        ranking[players[current-2]]++;
        ranking[callings[i]]--;
        
        string temp = players[current-1];
        players[current-1] = players[current-2];
        players[current-2] = temp;
    }
    
    return players;
}