#include <string>
#include <vector>
#include <unordered_map> // 변경: map -> unordered_map

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> ranking; // 변경: map 대신 unordered_map 사용
    // 이유: 이름으로 순위를 찾는 연산이 많아서 평균 O(1)로 더 빠름

    for (int i = 0; i < players.size(); i++)
    {
        ranking[players[i]] = i + 1;
        // 기존 방식 유지: 순위를 1등부터 저장
    }

    for (int i = 0; i < callings.size(); i++)
    {
        int current = ranking[callings[i]];
        // current = 현재 불린 선수의 "등수" (1-based)

        ranking[players[current - 2]]++;
        // 앞에 있던 선수의 등수는 1 내려감 (숫자로는 +1)

        ranking[callings[i]]--;
        // 불린 선수의 등수는 1 올라감 (숫자로는 -1)

        swap(players[current - 1], players[current - 2]);
        // 변경: temp 사용 대신 swap 사용
        // 실제 players 벡터에서도 두 선수의 위치를 교환
    }

    return players;
}