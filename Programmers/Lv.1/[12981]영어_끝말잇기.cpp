#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    vector<string> tmp;
    
    tmp.push_back(words[0]);
    for(int i = 1; i < words.size(); ++i) {
        if(find(tmp.begin(), tmp.end(), words[i]) != tmp.end() || tmp.back().back() != words[i][0]) {
            answer.push_back(i % n + 1);
            answer.push_back(i / n + 1);
            return answer;
        }
        tmp.push_back(words[i]);
    }
    return {0, 0};
}
