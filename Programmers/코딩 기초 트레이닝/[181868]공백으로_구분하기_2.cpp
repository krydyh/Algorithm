#include <vector>
#include <string>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string tmp = "";
    
    for(int i = 0; i < my_string.size(); ++i) {
        if(my_string[i] != ' ') tmp += my_string[i];
        else if(tmp != "") {
            answer.push_back(tmp);
            tmp = "";
        }
    }
    if(tmp != "") answer.push_back(tmp);
    return answer;
}
