using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    int time = 1;

    while(count) {
        answer += price * time;
        time++;
        count--;
    }
    answer -= money;
    if(answer < 0) return 0;
    else return answer;
}
