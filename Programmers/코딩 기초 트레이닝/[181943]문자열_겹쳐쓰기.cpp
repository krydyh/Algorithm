#include <string>

using namespace std;

string solution(string my_string, string overwrite_string, int s) {
    string answer = "";
    
    answer += my_string.substr(0, s);
    answer += overwrite_string;
    answer += my_string.substr(overwrite_string.size() + s);
    return answer;
}
