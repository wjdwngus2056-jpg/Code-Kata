#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    if (num % 2 != 0) { return "Odd"; }
    else if (num % 2 == 0) { return "Even"; }
}