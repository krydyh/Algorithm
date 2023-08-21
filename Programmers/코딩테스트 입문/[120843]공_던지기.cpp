#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
  
    if(k == 1) return numbers[0];
    
    for(int i = 0; i < k - 1; i++) {
        answer += 2;
        if(answer > numbers.size() - 1) answer -= numbers.size();
    }
    return numbers[answer];
}
