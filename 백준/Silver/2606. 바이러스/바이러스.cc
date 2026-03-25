#include <iostream>
#include <vector>
using namespace std;

vector<int> virus[101];
bool visited[101];
int answer = 0;

void dfs(int num)
{
    visited[num] = true;
    for (int i = 0; i < virus[num].size(); i++)
    {
        int next = virus[num][i];
        if (!visited[next])
        {
            answer++;
            dfs(next);
        }
    }
}


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        virus[a].push_back(b);
        virus[b].push_back(a);
    }

    dfs(1);

    cout << answer << "\n";
}