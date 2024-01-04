#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    vector<int> visit;
    
    for(int i = 0; i < number.size() - 3; ++i) visit.push_back(0);
    for(int i = number.size() - 3; i < number.size(); ++i) visit.push_back(1);
    do {
        int sum = 0;
        for(int i = 0; i < number.size(); ++i) {
            if(visit[i] == 1) sum += number[i];
        }
        if(sum == 0) answer++;
    } while(next_permutation(visit.begin(), visit.end()));
    
    return answer;
}
