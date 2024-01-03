#include <string>
#include <algorithm>

using namespace std;

string solution(string s) {
    int check = 0;
    
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == ' ') {
            check = 0;
            continue;
        }
        if(check % 2 == 0) s[i] -= 32;
        check++;
    }
    return s;
}
