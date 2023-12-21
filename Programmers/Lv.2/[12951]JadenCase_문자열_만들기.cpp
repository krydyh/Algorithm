#include <string>
#include <algorithm>

using namespace std;

string solution(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    if('a' <= s[0] && s[0] <= 'z') s[0] -= 32;
    for(int i = 1; i < s.size() - 1; ++i) {
        if(s[i] == ' ' && 'a' <= s[i + 1] && s[i + 1] <= 'z') s[i + 1] -= 32;
    }
    return s;
}
