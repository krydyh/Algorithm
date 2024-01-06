#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> alp(26, -1);
    vector<int> answer;
    
    for(int i = 0; i < s.size(); ++i) {
        if(alp[s[i] - 'a'] == -1) answer.push_back(-1);
        else answer.push_back(i - alp[s[i] - 'a']);
        alp[s[i] - 'a'] = i;
    }
    return answer;
}
