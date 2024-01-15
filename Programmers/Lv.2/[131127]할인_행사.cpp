#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    vector<int> original_number = number;
    
    for(int i = 0; i <= discount.size() - 10; ++i) {
        int check = 1;
        number = original_number;
        for(int j = i; j < i + 10; ++j) {
            auto found = find(want.begin(), want.end(), discount[j]);
            if(found != want.end() 
            && number[found - want.begin()] != 0) {
                number[found - want.begin()]--;
            }
            else if(found == want.end() 
            || number[found - want.begin()] == 0) {
                check = 0;
                break;
            }
        }
        if(check == 1) answer++;
    }
    return answer;
}
