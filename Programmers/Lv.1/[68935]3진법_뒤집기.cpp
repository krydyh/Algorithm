#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    int answer = 0, sqr = 0;
    vector<int> three;
    
    while(n) {
        three.push_back(n % 3);
        n /= 3;
    }
    for(int i = three.size() - 1; 0 <= i; --i) {
        answer += three[i] * pow(3, sqr);
        sqr++;
    }
    return answer;
}
