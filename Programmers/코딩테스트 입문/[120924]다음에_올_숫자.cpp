#include <vector>

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int temp = 0;
    
    if((common[2] - common[1]) == (common[1] - common[0])) {
        temp = common[2] - common[1];
        answer = common[(common.size() - 1)] + temp;
    }
    else {
        temp = common[2] / common[1];
        answer = common[(common.size() - 1)] * temp;
    }
    return answer;
}
