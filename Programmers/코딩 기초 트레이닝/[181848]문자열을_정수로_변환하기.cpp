#include <string>

using namespace std;

int solution(string n_str) {
    int answer = 0;
    int pos = 1;
    
    for(int i = n_str.size() - 1; 0 <= i; --i) {
        answer += (n_str[i] - '0') * pos;
        pos *= 10;
    }
    return answer;
}