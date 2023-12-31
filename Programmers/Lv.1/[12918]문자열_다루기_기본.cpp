#include <string>

using namespace std;

bool solution(string s) {
    if(s.size() != 4 && s.size() != 6) return false;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] < '0' || '9' < s[i]) return false;
    }
    return true;
}
