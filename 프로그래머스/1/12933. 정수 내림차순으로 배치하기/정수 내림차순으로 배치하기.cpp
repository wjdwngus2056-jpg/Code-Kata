#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

bool sortVec(int a, int b)
{
    return a >= b;
}

long long solution(long long n) {
    long long answer = 0;
    vector<int> vecNum;
    
    while (n >= 1)
    {
        vecNum.push_back(n % 10);
        n = n / 10;
    }
    
    sort(vecNum.begin(), vecNum.end(), sortVec);
    
    for (size_t i = 0; i < vecNum.size(); i++)
    {
        answer += vecNum[i] * pow(10, vecNum.size() - (i+1));
    }
    
    return answer;
}