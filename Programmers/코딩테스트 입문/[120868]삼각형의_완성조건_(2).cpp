#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int small = sides[0];
    int big = sides[0];
    
    small = (small < sides[1]) ? small : sides[1];
    big = (big > sides[1]) ? big : sides[1];
    for(int i = big - small; i < big; ++i) answer += 1;
    for(int j = big + 1; j < small + big; ++j) answer += 1;
    return answer;
}
