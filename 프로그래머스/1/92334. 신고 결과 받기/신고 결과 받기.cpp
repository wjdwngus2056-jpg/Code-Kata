#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <set>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer(id_list.size(), 0);
    unordered_map<string, int> IdIndex;
    unordered_map<string, set<string>> ReportedMap;
    
    for (int i = 0; i < id_list.size(); i++)
    {
        IdIndex[id_list[i]] = i;
    }
    
    for (int i = 0; i < report.size(); i++)
    {
        string reporter, reported;
        stringstream ss(report[i]);
        ss >> reporter >> reported;
        
        ReportedMap[reported].insert(reporter);
    }
    
    for (auto reporter : ReportedMap)
    {
        if (reporter.second.size() >= k)
        {
            for (auto id : reporter.second)
            {
                answer[IdIndex[id]]++;
            }
        }
    }
    
    return answer;
}