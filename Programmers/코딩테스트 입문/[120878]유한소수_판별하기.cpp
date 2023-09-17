#include <vector>

using namespace std;

int gcd(int a, int b) {
    return (a % b == 0 ? b : gcd(b, a % b));
}

int solution(int a, int b) {
    b /= gcd(a, b);
    
    while(1) {
        if(b % 2 == 0) b /= 2;
        else if(b % 5 == 0) b /= 5;
        else break;
    }
    if(b == 1) return 1;
    else return 2;
}
