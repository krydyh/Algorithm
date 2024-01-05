#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int width = 0, height = 0;
    
    for(int i = 0; i < sizes.size(); ++i) {
        width = max(width, max(sizes[i][0], sizes[i][1]));
        height = max(height, min(sizes[i][0], sizes[i][1]));
    }
    return width * height;
}
