#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> s_list;
    stringstream ss(s);
    string temp;
    
    while(ss >> temp) s_list.push_back(temp);
    for(int i = 0; i < s_list.size(); i++) {
        if(s_list[i] == "Z") answer -= stoi(s_list[i - 1]);
        else answer += stoi(s_list[i]);
    }
    return answer;
}
