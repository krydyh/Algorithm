using namespace std;

bool solution(int x) {
    int sum = 0, temp = x;
    
    while(temp) {
        sum += temp % 10;
        temp /= 10;
    }
    if(x % sum == 0) return true;
    else return false;
}
