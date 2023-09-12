#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    vector<int> d1 = dots[0];
    vector<int> d2 = dots[1];
    vector<int> d3 = dots[2];
    vector<int> d4 = dots[3];
    
    if(double(double(d1[1]-d2[1])/double(d1[0]-d2[0]))
      ==double(double(d3[1]-d4[1])/double(d3[0]-d4[0]))
    ||double(double(d1[1]-d3[1])/double(d1[0]-d3[0]))
      ==double(double(d2[1]-d4[1])/double(d2[0]-d4[0]))
    ||double(double(d1[1]-d4[1])/double(d1[0]-d4[0]))
      ==double(double(d2[1]-d3[1])/double(d2[0]-d3[0]))) return 1;
    
    return 0;
}
