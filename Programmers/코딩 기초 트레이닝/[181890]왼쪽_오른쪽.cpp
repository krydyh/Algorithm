#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> str_list) {
    vector<string> answer;
    int pos = 0;
    
    for(int i = 0; i < str_list.size(); ++i) {
        if(str_list[i] == "l") {
            pos = i;
            return vector<string>(str_list.begin(), str_list.begin() + pos);
        }
        else if(str_list[i] == "r") {
            pos = i;
            return vector<string>(str_list.begin() + pos + 1, str_list.end());
        }
    }
    if(pos == 0) return answer;
}
