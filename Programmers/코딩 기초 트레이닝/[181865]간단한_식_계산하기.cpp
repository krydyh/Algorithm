#include <string>

using namespace std;

int solution(string binomial) {
    int answer = 0;
    string tmp_i, tmp_s;
    
    for(int i = 0; i < binomial.size(); ++i) {
        if('0' <= binomial[i] && binomial[i] <= '9') tmp_i += binomial[i];
        else if(binomial[i] != ' ') {
            answer += stoi(tmp_i);
            tmp_i = "";
            tmp_s = binomial[i];
        }
    }
    if(tmp_s == "+") return answer += stoi(tmp_i);
    else if(tmp_s == "-") return answer -= stoi(tmp_i);
    else return answer *= stoi(tmp_i);
}
