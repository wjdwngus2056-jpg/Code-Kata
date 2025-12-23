#include <string>
#include <vector>

using namespace std;

int solution(int price) {
    int answer = 0;
    double realPrice;
        
    realPrice = price;
    
    if (price >= 100000 && price < 300000)
    {
        realPrice = realPrice - (realPrice/20);
    }
    else if (price >= 300000 && price < 500000)
    {
        realPrice = realPrice - (realPrice/10);
    }
    else if (price >= 500000)
    {
        realPrice = realPrice - (realPrice/5);
    }
    
    answer = realPrice;
    
    return answer;
}