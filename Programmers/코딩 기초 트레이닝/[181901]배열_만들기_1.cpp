#include <vector>

using namespace std;

vector<int> solution(int n, int k) {
    vector<int> answer;
    int check = 1;
    
    for(int i = 0; i < n / k; ++i) {
        answer.push_back(k * check);
        ++check;
    }
    return answer;
}
