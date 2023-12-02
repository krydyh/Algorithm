#include <string>

using namespace std;

string solution(string my_string, int s, int e) {
    string answer = "";
    
    for(int i = 0; i < my_string.size(); ++i) {
        if(i == s) {
            for(int i = e; i >= s; --i) answer += my_string[i];
            i = e;
        }
        else answer += my_string[i];
    }
    return answer;
}
