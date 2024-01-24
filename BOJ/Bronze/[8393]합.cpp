#include <iostream>

using namespace std;

int main()
{
    int many, sum = 0;
    cin >> many;
    for(int i = 1; i <= many; ++i) {
        sum += i;
    }
    cout << sum;
    return 0;
}
