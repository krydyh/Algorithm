#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0, i = 0;
    
    sort(people.begin(), people.end());
    while(people.size() > i) {
        if(people[i] + people.back() <= limit) {
            answer++;
            i++;
            people.pop_back();
        }
        else {
            answer++;
            people.pop_back();
        }
    }
    return answer;
}
