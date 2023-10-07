#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int odd = 0, even = 0;
    
    for(int i = 0; i < num_list.size(); ++i) {
        if(num_list[i] % 2 == 1) {
            odd = odd * 10 + num_list[i];
        }
        else {
            even = even * 10 + num_list[i];
        }
    }
    return odd + even;
}
