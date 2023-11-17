#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string tmp;
    
    for(int i = my_string.size() - 1; i >= 0; --i) {
        tmp = my_string.substr(i);
        answer.push_back(tmp);
    }
    sort(answer.begin(), answer.end());
    return answer;
}
