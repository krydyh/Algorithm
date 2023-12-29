#include <vector>

using namespace std;

int fibonacci(int n) {
    vector<int> fib(n + 1, 0);
    fib[1] = 1;
    fib[2] = 1;
    
    for(int i = 3; i <= n; ++i) {
        fib[i] = (fib[i - 1] + fib[i - 2]) % 1234567;
    }
    return fib[n];
}

int solution(int n) {
    return fibonacci(n);
}
