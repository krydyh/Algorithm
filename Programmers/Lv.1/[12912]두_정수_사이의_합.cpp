using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long temp = 0;
    
    if(a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    for(int i = a; i <= b; ++i) answer += i;
    return answer;
}
