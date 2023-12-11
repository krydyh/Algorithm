#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int i = 0;
    
    while(i < arr.size()) {
        if(stk.empty()) {
            stk.push_back(arr[i]);
            i++;
        }
        else if(stk.empty() == 0 && stk[stk.size() - 1] == arr[i]) {
            stk.pop_back();
            i++;
        }
        else if(stk.empty() == 0 && stk[stk.size() - 1] != arr[i]) {
            stk.push_back(arr[i]);
            i++;
        }
    }
    if(stk.empty()) stk.push_back(-1);
    return stk;
}
