#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> check(10000001, 0);
    
    for(int i = 0; i < tangerine.size(); ++i) {
        check[tangerine[i]]++;
    }
    sort(check.rbegin(), check.rend());
    for(int i = 0; i < check.size(); ++i) {
        answer++;
        k -= check[i];
        if(k <= 0) break;
    }
    return answer;
}
