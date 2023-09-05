using namespace std;

int solution(int chicken) {
    int service = 0;
    int answer = 0;
    
    while(1) {
        if(chicken < 10) break;
        service = chicken % 10;
        chicken /= 10;
        answer += chicken;
        chicken += service;
    }
    return answer;
}
