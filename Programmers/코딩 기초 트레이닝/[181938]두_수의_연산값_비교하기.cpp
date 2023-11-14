#include <cmath>

using namespace std;

int solution(int a, int b) {
    int answer = 0, b_c = b, check = 0;
    
    while(b_c > 0) {
        b_c /= 10;
        check++;
    }
    answer = (a * pow(10, check)) + b;
    return answer >= 2 * a * b ? answer : 2 * a * b;
}
