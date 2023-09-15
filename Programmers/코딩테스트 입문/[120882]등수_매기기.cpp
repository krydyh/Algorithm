#include <vector>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer(score.size());
    
    for(int i = 0; i < score.size(); ++i) {
        answer[i] = 1;
        for(int j = 0; j < score.size(); ++j) {
            if(score[i][0] + score[i][1]  < score[j][0] + score[j][1]) answer[i]++;
        }
    }
    return answer;
}
