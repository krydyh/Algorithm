#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    int day = 0;
    vector<string> dow{"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    vector<int> days{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    for(int i = 0; i < a - 1; ++i) day += days[i];
    day += b;
    return dow[(day - 1) % 7];
}
