#include <string>

using namespace std;

string solution(string s, int n) {
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == ' ') continue;
        else {
            if('A' <= s[i] && s[i] <= 'Z') {
                s[i] += n - 26;
                if(s[i] < 'A') s[i] += 26;   
            } 
            else if('a' <= s[i] && s[i] <= 'z') {
                s[i] += n - 26;
                if(s[i] < 'a') s[i] += 26;
            }
        }
    }
    return s;
}
