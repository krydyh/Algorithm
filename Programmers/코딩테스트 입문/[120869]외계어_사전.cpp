#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 0;
    for(int i = 0; i < dic.size(); i++) {
        int check = 0;
        for(int j = 0; j < spell.size(); j++) {
            if(dic[i].find(spell[j]) == -1) {
                answer = 2;
                check = -1;
                break;
            }
        }
        if(check == 0) return 1;
    }
    return answer;
}
