#include <iostream>

using namespace std;

int main()
{
    int many;
    cin >> many;
    for(int i = 0; i < many; ++i) {
        int a, b;
        cin >> a >> b;
        cout << a + b << endl;
    }
    return 0;
}
