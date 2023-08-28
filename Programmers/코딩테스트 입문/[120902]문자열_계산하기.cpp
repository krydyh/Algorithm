#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    vector<string> s_list;
    stringstream ss(my_string);
    string temp;
    
    while(ss >> temp) s_list.push_back(temp);
    answer += stoi(s_list[0]);
    for(int i = 1; i < s_list.size(); i++) {
        if(s_list[i] == "+") answer += stoi(s_list[i+1]);
        else if(s_list[i] == "-") answer -= stoi(s_list[i+1]);
    }
    return answer;
}
