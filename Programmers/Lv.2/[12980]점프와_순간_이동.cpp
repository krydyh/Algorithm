using namespace std;

int solution(int n)
{
    int ans = 0;
    
    while(n) {
        if(n % 2 == 1) ans++;
        n /= 2;
    }
    return ans;
}
