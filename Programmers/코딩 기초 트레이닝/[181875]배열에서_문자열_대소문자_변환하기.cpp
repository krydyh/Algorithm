#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    
    for(int i = 0; i < strArr.size(); ++i) {
        if(i % 2 == 1) {
            transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::toupper);
        }
        else {
            transform(strArr[i].begin(), strArr[i].end(), strArr[i].begin(), ::tolower);
        }
        answer.push_back(strArr[i]);
    }
    return answer;
}
