#include <string>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    long long t_changed, p_changed;
    
    for(int i = 0; i < t.size() - p.size() + 1; ++i) {
        t_changed = stoll(t.substr(i, p.size()));
        p_changed = stoll(p);
        if(t_changed <= p_changed) answer++;
    }
    return answer;
}
