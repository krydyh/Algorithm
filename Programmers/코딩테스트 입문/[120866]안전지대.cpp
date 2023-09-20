#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int n = board.size();
    int m = board[0].size();
    
    vector<vector<int>> xy{{1,1},{1,0},{1,-1},{0,-1},{0,0},{0,1},{-1,1},{-1,0},{-1,-1}};
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            int check = 1;
            for(const auto& k : xy) {
                int ni = i + k[0];
                int nj = j + k[1];
                if(ni >= 0 && ni < n && nj >= 0 && nj < m && board[ni][nj] == 1) {
                    check = 0;
                    break;
                }
            }
            answer += check;
        }
    }
    return answer;
}
