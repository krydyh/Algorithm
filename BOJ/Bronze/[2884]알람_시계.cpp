#include <iostream>

using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(y >= 45) {
        cout << x << ' ' << y - 45;
    }
    else {
        if(x == 0) cout << 23 << ' ' << 60 - (45 - y);
        else cout << x - 1 << ' ' << 60 - (45 - y);
    }
}
