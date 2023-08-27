#include <string>
#include <vector>

using namespace std;

vector<string> number = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

long long solution(string numbers) {
    long long answer = 0;
    
    while(numbers.length() != 0) {
        for(int i = 0; i < number.size(); i++) {
            if(numbers.substr(0, number[i].length()) == number[i]) {
                answer = answer * 10 + i;
                numbers = numbers.substr(number[i].length());
            }
        }
    }
    return answer;
}
