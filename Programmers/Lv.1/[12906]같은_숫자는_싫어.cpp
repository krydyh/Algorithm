#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int check = -1;
    
    for(int i = 0; i < arr.size(); ++i) {
        if(check != arr[i]) answer.push_back(arr[i]);
        check = arr[i];
    }
    return answer;
}
