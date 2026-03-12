#include <string>
#include <vector>
#include <sstream>

using namespace std;

int encode(string Inday)
{
    int year, month, day;
    
    for (int i = 0; i < Inday.length(); i++)
    {
        if (Inday[i] == '.')
        {
            Inday[i] = ' ';
        }
    }
    
    stringstream encodeday(Inday);
    encodeday >> year >> month >> day;
    return year*12*28 + month*28 + day;    
}

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    int todaycode = encode(today);
    
    for (int i = 0; i < privacies.size(); i++)
    {
        string date;
        char typeP;
        
        stringstream ss(privacies[i]);
        
        ss >> date >> typeP;
        
        int daycode = encode(date);
        
        for (int j = 0; j < terms.size(); j++)
        {
            string t = terms[j];
            char typeT;
            int month;
            
            stringstream term(t);
            term >> typeT >> month;
            
            if (typeT == typeP)
            {
                if (todaycode >= month*28 + daycode)
                {
                    answer.push_back(i+1);
                }
            }
        }
    }
    
    return answer;
}