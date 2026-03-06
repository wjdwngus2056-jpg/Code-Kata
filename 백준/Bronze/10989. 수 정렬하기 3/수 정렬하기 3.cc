#include <iostream>
#include <map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    map<int, int> nummap;
    int N;
    cin >> N;
    
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;
        nummap[num]++;
    }
    
    for (auto num : nummap)
    {
        for (int i = 0; i < num.second; i++)
        {
            cout << num.first << '\n';  
        }
    }
    
    return 0;
}