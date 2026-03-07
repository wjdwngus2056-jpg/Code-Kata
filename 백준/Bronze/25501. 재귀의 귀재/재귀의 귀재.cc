#include <iostream>
#include <string>

using namespace std;

int count;

int recursion(const string& s, int l, int r)
{
    count++;
    if (l >= r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const string& s)
{
    return recursion(s, 0, s.length()-1);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int T;
    cin >> T;
    
    for (int i = 0; i < T; i++)
    {
        count = 0;
        string S;
        cin >> S;
        cout << isPalindrome(S) << ' ' << count << '\n';
    }
}