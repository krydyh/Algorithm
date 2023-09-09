#include <string>

using namespace std;

int solution(string A, string B) {
    if(A == B) return 0;
    for(int i = 1; i < A.size(); i++) {
        char s = A[A.size() - 1];
        A = A.substr(0, A.size() - 1);
        A = s + A;
        if(A == B) return i;
    }
    return -1;
}
