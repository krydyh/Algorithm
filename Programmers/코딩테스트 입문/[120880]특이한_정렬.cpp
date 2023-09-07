#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    int temp;
    
    for(int i = 0; i < numlist.size() - 1; i++) {
        for(int j = i; j < numlist.size(); j++) {
            if(abs(n - numlist[i]) > abs(n - numlist[j])) {
                temp = numlist[i];
                numlist[i] = numlist[j];
                numlist[j] = temp;
            }
            if(abs(n - numlist[i]) == abs(n - numlist[j]) && numlist[i] < numlist[j]) {
                temp = numlist[j];
                numlist[j] = numlist[i];
                numlist[i] = temp;
            }
        }
    }
    return numlist;
}
