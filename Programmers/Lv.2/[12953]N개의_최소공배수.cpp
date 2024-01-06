#include <vector>

using namespace std;

int gcd(int a, int b) {
    if(a % b == 0) return b;
    else return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int solution(vector<int> arr) {
    if(arr.size() == 1) return arr[0];
    else {
        int lcm_s = lcm(arr[0], arr[1]);
        for(int i = 2; i < arr.size(); ++i) {
            lcm_s = lcm(lcm_s, arr[i]);
        }
        return lcm_s;
    }
}
