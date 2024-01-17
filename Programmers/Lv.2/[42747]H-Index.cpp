#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    sort(citations.rbegin(), citations.rend());
    
    for(int i = citations.size() - 1; 0 <= i; --i) {
        if(citations[i] >= i + 1) return i + 1;
    }
}
