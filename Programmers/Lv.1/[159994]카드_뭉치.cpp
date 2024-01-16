#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int c1 = -1, c2 = -1;
    
    for(int i = 0; i < goal.size(); ++i) {
        if(find(cards1.begin(), cards1.end(), goal[i]) != cards1.end()) {
            int c1_pos = find(cards1.begin(), cards1.end(), goal[i]) - cards1.begin();
            if(c1 > c1_pos || c1_pos - 1 != c1) return "No";
            else c1 = c1_pos;
        }
        else if(find(cards2.begin(), cards2.end(), goal[i]) != cards2.end()) {
            int c2_pos = find(cards2.begin(), cards2.end(), goal[i]) - cards2.begin();
            if(c2 > c2_pos || c2_pos - 1 != c2) return "No";
            else c2 = c2_pos;
        }
    }
    return "Yes";
}
