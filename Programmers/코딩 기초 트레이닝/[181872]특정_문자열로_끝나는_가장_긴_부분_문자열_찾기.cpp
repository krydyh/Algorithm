#include <string>

using namespace std;

string solution(string myString, string pat) {
    string answer = "";
    
    for(int i = myString.size() - pat.size(); i >= 0; --i) {
        if(pat == myString.substr(i, pat.size())) {
            answer += myString.substr(0, i + pat.size());
            break;
        }
    }
    return answer;
}
