#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

void search(vi arr, vi sub, int index) {
    cout << "( ";
    
    for (int item: sub)
        cout << item << " ";
    
    cout << ")" << "\n";
    
    for(int i = index; i < arr.size(); i++) {
        sub.push_back(arr[i]);
        search(arr, sub, i + 1);
        sub.pop_back();
    }
}

void solve() {
    vi arr = {7, 2, 5, 4};
    vi sub;
    int index = 0;
    
    search(arr, sub, index);
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
