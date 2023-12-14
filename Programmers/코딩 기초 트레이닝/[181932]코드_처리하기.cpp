#include <string>

using namespace std;

string solution(string code) {
    string answer = "";
    char mode = '0';
    
    for(int i = 0; i < code.size(); ++i) {
        if(mode == '0') {
            if(code[i] != '1') {
                if(i % 2 == 0) answer += code[i];
            }
            else mode = '1';
        }
        else if(mode == '1') {
            if(code[i] != '1') {
                if(i % 2 == 1) answer += code[i];
            }
            else mode = '0';
        }
    }
    if(answer.empty()) return "EMPTY";
    return answer;
}
