#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> seq;
    
    for(int i = 0; i < elements.size(); ++i) {
        int sum = 0;
        for(int j = i; j < i + elements.size(); ++j) {
            int idx = j % elements.size();
            sum += elements[idx];
            seq.insert(sum);
        }
    }
    answer = seq.size();
    return answer;
}
