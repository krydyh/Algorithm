#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int x = 0, y = 0, x_max = board[0] / 2, y_max = board[1] / 2;
    
    for(int i = 0; i < keyinput.size(); i++) {
        if(keyinput[i] == "up" && y < y_max) y += 1;
        else if(keyinput[i] == "down" && y > -y_max) y -= 1;
        else if(keyinput[i] == "left" && x > -x_max) x -= 1;
        else if(keyinput[i] == "right" && x < x_max) x += 1;
    }
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}
