using namespace std;

int solution(int n) {
    int answer = n;
    for(int i = 1; i < n; ++i) {
        if(i % 3 == 0 || i / 10 == 3 || i % 10 == 3) answer++;
        while(1) {
            if(answer % 3 == 0 || answer / 10 == 3 || answer % 10 == 3 || (answer % 100) / 10 == 3) answer++;
            else break;
        }
    }
    return answer;
}
