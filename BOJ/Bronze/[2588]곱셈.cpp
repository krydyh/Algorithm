#include <iostream>

using namespace std;

int main() {
    int a, b;
  
    cin >> a >> b;
    int ans = a * b;
    cout << a * (b % 10) << endl;
    b /= 10;
    cout << a * (b % 10) << endl;
    b /= 10;
    cout << a * b << endl;
    cout << ans;
    return 0;
}
