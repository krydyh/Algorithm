#include <string>

using namespace std;

int solution(string myString, string pat) {
    string change;
    
    for(int i = 0; i < myString.size(); ++i) {
        if(myString[i] == 'A') change += 'B';
        else if(myString[i] == 'B') change += 'A';
    }
    if(change.find(pat) != string::npos) return 1;
    else return 0;
}
