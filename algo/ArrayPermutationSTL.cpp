#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<bool> vb;

void solve() {
    vi arr = {6, 2, 10};
    
    sort(arr.begin(), arr.end());
    
    do {
        cout << "( ";
        
        for (int item : arr)
            cout << item << " ";
        
        cout << ")" << "\n";
    } while(next_permutation(arr.begin(), arr.end()));
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
