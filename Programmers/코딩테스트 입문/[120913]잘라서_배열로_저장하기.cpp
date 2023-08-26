#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    int q = my_str.length() / n;
    int r = my_str.length() % n;
    int count = 0;
    
    for(int i = 0; i < q; i++) {
        answer.push_back(my_str.substr(count, n));
        count += n;
    }
    if(r > 0) answer.push_back(my_str.substr(count));
    return answer;
}
