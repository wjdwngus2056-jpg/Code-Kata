#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<int> graph[1001];
bool DFSVisited[1001];
bool BFSVisited[1001];
int N, M, V;

void DFS(int v)
{
    DFSVisited[v] = true;

    cout << v;

    for (int i = 0; i < graph[v].size(); i++)
    {
        int num = graph[v][i];
        if (!DFSVisited[num])
        {
            cout << ' ';
            DFS(num);
        }
    }
}

void BFS(int v)
{
    BFSVisited[v] = true;
    queue<int> q;

    q.push(v);

    cout << v;
    
    while (!q.empty())
    {
        int num = q.front();
        q.pop();

        for (int i = 0; i < graph[num].size(); i++)
        {
            int next = graph[num][i];
            if (!BFSVisited[next])
            {
                BFSVisited[next] = true;
                q.push(next);
                cout << ' ';
                cout << next;
            }
        }
    }

}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N >> M >> V;

    for (int i = 0; i < M; i++)
    {
        int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    for (int i = 1; i <= N; i++)
    {
        sort(graph[i].begin(), graph[i].end());
    }

    DFS(V);
    cout << '\n';
    BFS(V);

    return 0;
}