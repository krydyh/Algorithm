#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int x1 = dots[0][0], x2 = dots[0][0], y1 = dots[0][1], y2 = dots[0][1];
    
    for(int i = 0; i < 4; i++) {
        if(dots[i][0] < x1) x1 = dots[i][0];
        if(dots[i][0] > x2) x2 = dots[i][0];
        if(dots[i][1] < y1) y1 = dots[i][1];
        if(dots[i][1] > y2) y2 = dots[i][1];
    }
    answer = (x2 - x1) * (y2 - y1);
    return answer;
}
