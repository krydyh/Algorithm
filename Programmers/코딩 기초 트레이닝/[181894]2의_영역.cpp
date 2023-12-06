#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> check;
    
    for(int i = 0; i < arr.size(); ++i) {
        if(arr[i] == 2) check.push_back(i);
    }
    if(check.empty()) return {-1};
    else {
        return vector<int>(arr.begin() + check[0], arr.begin() + check[check.size() - 1] + 1);
    }
}
