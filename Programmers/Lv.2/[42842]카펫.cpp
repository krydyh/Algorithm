#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int size = brown + yellow;
    
    for(int hgt = 3; hgt <= size / 2; ++hgt) {
        int width = size / hgt;
        
        if(size % hgt == 0) {
            int count = (width * 2) + (hgt - 2) * 2;
            if(brown == count && yellow == size - count) {
                answer.push_back(width);
                answer.push_back(hgt);
                break;
            }
        }
    }    
    return answer;
}
