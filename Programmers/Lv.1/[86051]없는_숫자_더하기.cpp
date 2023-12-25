#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> check = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    for(int i = 0; i < check.size(); ++i) {
        if(find(numbers.begin(), numbers.end(), check[i]) == numbers.end()) answer += check[i];
    }
    return answer;
}
