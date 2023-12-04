#include <vector>

using namespace std;

int count(int n) {
    int i = 1;
    
    while(i < n) {
        i *= 2;
    }
    return i;
}

vector<int> solution(vector<int> arr) {
    int add = count(arr.size());
    
    arr.resize(add, 0);
    return arr;
}
