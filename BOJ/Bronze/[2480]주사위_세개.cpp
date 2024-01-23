#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(a == b && b == c) cout << 10000 + (a * 1000);
    else if(a == b || a == c) cout << 1000 + (a * 100);
    else if(b == c)  cout << 1000 + (b * 100);
    else {
        int max_ele = max(a, b);
        max_ele = max(max_ele, c);
        cout << max_ele * 100;
    }
    return 0;
}
