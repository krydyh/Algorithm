#include <string>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer;
    
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower);
    for(int i = 0 ; i < myString.size(); ++i) {
        if (myString[i] == 'a') answer += 'A';
        else answer += myString[i];
    }
    return answer;
}
