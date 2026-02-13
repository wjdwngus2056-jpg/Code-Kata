#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int sum = 0;
    int count = 0;
    sort(d.begin(), d.end());
    
    while (sum <= budget && count <= d.size())
    {
        sum += d[count];
        count++;
    }
    
    answer = count-1;
    
    return answer;
}