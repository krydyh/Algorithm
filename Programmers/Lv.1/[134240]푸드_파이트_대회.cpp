#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    string rev = "";
    
    for(int i = 1; i < food.size(); ++i) {
        for(int j = 0; j < food[i] / 2; ++j) {
            answer += to_string(i);
        }
    }
    rev = answer;
    reverse(rev.begin(), rev.end());
    answer += '0';
    answer += rev;
    return answer;
}
