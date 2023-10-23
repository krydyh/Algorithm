#include <string>

using namespace std;

int find(string str) {
    for(int i = 0; i < str.size(); ++i) {
        if(str[i] != '0') return i;
    }
}

string solution(string n_str) {
    int n = find(n_str);
    string answer = n_str.substr(n);
    
    return answer;
}
