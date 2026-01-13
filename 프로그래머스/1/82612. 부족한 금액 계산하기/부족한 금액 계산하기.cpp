using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = -1;
    long long total_price = 0;
    while (count > 0)
    {
        total_price += price*count;
        count--;
    }
    if (money >= total_price)
    {
        return 0;
    }
    else
    {
        answer = total_price - money;
        return answer;
    }
}