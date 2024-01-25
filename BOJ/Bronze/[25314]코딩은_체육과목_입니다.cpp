#include <iostream>

using namespace std;

int main()
{
    int byte;
  
    cin >> byte;
    for(int i = 0; i < byte / 4; ++i) cout << "long ";
    cout << "int";
    return 0;
}
