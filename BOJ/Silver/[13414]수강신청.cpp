#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compare(pair<string, int>& a, pair<string, int>& b) {
    return a.second < b.second;
}

int main()
{
    int K, L;
    unordered_map<string, int> um;
    string temp;
    
    cin >> K >> L;
    for(int i = 0; i < L; i++) {
        cin >> temp;
        um[temp] = i;
    }
    vector<pair<string, int>> vec(um.begin(), um.end());
    sort(vec.begin(), vec.end(), compare);
    for(int i = 0; i < min(K, (int)vec.size()); i++)
        cout << vec[i].first << "\n";
    return 0;
}