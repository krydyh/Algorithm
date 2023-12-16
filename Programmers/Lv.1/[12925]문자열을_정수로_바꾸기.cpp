#include <string>

using namespace std;

int solution(string s) {
    int answer = 0, check = 0;
    
    if(s[0] == '-') {
        check = 1;
        answer = stoi(s.substr(1));
    }
    else if(s[0] == '+') answer = stoi(s.substr(1));
    else answer = stoi(s);
    if(check == 1) answer *= -1;
    return answer;
}