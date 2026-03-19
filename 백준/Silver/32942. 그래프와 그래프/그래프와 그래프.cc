#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int A, B, C;
    cin >> A >> B >> C;
    
    for (int x = 1; x <= 10; x++)
    {
        vector<int> arr;
        for (int y = 1; y <= 10; y++)
        {
            if (A*x + B*y == C)
            {
                arr.push_back(y);
            }
        }
        
        if (arr.empty())
        {
            cout << '0' << '\n';
        }
        else
        {
            for (const int y : arr)
            {
                cout << y << ' ';
            }
            cout << '\n';
        }
    }
    
    return 0;
}