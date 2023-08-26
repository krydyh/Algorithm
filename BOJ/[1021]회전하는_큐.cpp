#include <iostream>
#include <deque>
#include <algorithm>

using namespace std;

int main()
{
    int N, M, temp;
    int count = 0;
    
    cin >> N >> M;
    deque<int> dq;
    deque<int> idx(M);
    for(int i = 1; i <= N; i++)
        dq.push_back(i);
    for(int j = 0; j < idx.size(); j++) {
        cin >> idx[j];
        int n = idx[j];
        deque<int>::iterator it = find(dq.begin(), dq.end(), n);
        int pos = distance(dq.begin(), it);
        if (pos <= dq.size() / 2) {
            while(dq.front() != n) {
                temp = dq.front();
                dq.pop_front();
                dq.push_back(temp);
                count++;
            }
        }
        else {
            while(dq.front() != n) {
                temp = dq.back();
                dq.pop_back();
                dq.push_front(temp);
                count++;
            }
        }
        dq.pop_front();
    }
    cout << count;
    return 0;
}