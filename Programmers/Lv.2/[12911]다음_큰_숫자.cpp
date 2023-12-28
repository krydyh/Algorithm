using namespace std;

int solution(int n) {
    int one = 0, n_c = n;
    
    while(n_c) {
        if(n_c % 2 == 1) one++;
        n_c /= 2;
    }
    for(int i = n + 1;; ++i) {
        int count = 0, tmp = i;
        
        while(tmp) {
            if(tmp % 2 == 1) count++;
            tmp /= 2;
        }
        if(one == count) return i;
    }
}
