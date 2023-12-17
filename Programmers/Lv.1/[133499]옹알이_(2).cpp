#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    
    for(int i = 0; i < babbling.size(); ++i) {
        int check = 1, double_check = 0;
        for(int j = 0; j < babbling[i].size(); ++j) {
            if(babbling[i].substr(j,3) == "aya" && double_check != 1) {
                j += 2;
                double_check = 1;
            }
            else if(babbling[i].substr(j,2) == "ye" && double_check != 2) {
                j += 1;
                double_check = 2;
            }
            else if(babbling[i].substr(j,3) == "woo" && double_check != 3) {
                j += 2;
                double_check = 3;
            }
            else if(babbling[i].substr(j,2) == "ma" && double_check != 4) {
                j += 1;
                double_check = 4;
            }
            else {
                check = 0;
                double_check = 0;
                break;
            }
        }
        if(check == 1) answer++;
    }
    return answer;
}
