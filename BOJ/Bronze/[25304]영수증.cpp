#include <iostream>

using namespace std;

int main()
{
    int total, many, sum = 0;
    cin >> total >> many;
    for(int i = 0; i < many; ++i) {
        int price, count;
        cin >> price >> count;
        sum += price * count;
    }
    if(total == sum) cout << "Yes";
    else cout << "No";
    return 0;
}
