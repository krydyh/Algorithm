#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0, a = 0, b = 0;
    
    priority_queue<int, vector<int>, greater<int>> que;
    for(int i = 0; i < scoville.size(); ++i) que.push(scoville[i]);
    while(que.size() > 1 && que.top() < K) {
        answer++;
        a = que.top();
        que.pop();
        b = que.top();
        que.pop();
        que.push(a + b * 2);
    }
    if(que.top() < K) answer = -1;
    return answer;
}
