#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "fail";
    for(int i = 0; i < db.size(); ++i) {
        if(id_pw[0].compare(db[i][0]) == 0) {
            if(id_pw[1].compare(db[i][1]) == 0) answer = "login";
            else answer = "wrong pw"; 
            break;
        }
    }
    return answer;
}
