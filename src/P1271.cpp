#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> votes(m);
    for (int i = 0; i < m; i++) {
        cin >> votes[i];
    }
    sort(votes.begin(), votes.end());
    for (int i = 0; i < m; i++) {
        cout << votes[i] << " ";
    }
    cout << endl;
    return 0;
}