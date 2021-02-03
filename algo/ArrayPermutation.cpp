#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<bool> vb;

void search(vi arr, vi perm, vb chosen) {
    if (perm.size() == arr.size()) {
        cout << "(";
        
        for (int item : perm)
            cout << item << " ";
        
        cout << ")" << "\n";
    } else {
        for (int i = 0; i < arr.size(); i++) {
            if (chosen[i]) continue;
            chosen[i] = true;
            perm.push_back(arr[i]);
            search(arr, perm, chosen);
            chosen[i] = false;
            perm.pop_back();
        }
    }
}

void solve() {
    vi arr = {6, 2, 10};
    vi perm;
    vb chosen(3, false);
    
    search(arr, perm, chosen);
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
