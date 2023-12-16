#include <string>

using namespace std;

string solution(int num) {
    if(num % 2 == 1 || num % 2 == -1) return "Odd";
    else return "Even";
}
