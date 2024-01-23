#include <iostream>

using namespace std;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    if(y + z > 59) {
        x = x + ((y + z) / 60);
        y = (y + z) % 60;
        if(x >= 24) x = x - 24;
    }
    else y = y + z;
    cout << x << ' ' << y;
    return 0;
}
