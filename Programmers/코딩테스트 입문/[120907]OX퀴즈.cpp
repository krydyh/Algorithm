#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    
    for(int i = 0; i < quiz.size(); i++) {
        stringstream ss(quiz[i]);
        string temp = "";
        vector<string> s_list;
        
        while(ss >> temp) s_list.push_back(temp);
        if(s_list[1] == "+") {
            if(stoi(s_list[0]) + stoi(s_list[2]) == stoi(s_list[4])) answer.push_back("O");
            else answer.push_back("X");
        }
        else if(s_list[1] == "-") {
            if(stoi(s_list[0]) - stoi(s_list[2]) == stoi(s_list[4])) answer.push_back("O");
            else answer.push_back("X");
        }
    }
    return answer;
}
