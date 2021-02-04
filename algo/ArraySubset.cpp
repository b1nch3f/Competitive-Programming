#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

void search(vi arr, int n, int index, vi& subset)
{
    if (index == n)
    {
        // process subset
        cout << "( ";
        for (int item : subset)
        {
            cout << item << " ";
        }
        cout << ")" << "\n";
    }
    else
    {
        // include k in the subset
        subset.push_back(arr[index]);
        search(arr, n, index+1, subset);
        subset.pop_back();
        // don't include k in the subset
        search(arr, n, index+1, subset);
    }
}

void solve()
{
    vi arr = {1};
    int n = (int)arr.size();
    int index = 0;
    vi subset;
    search(arr, n, index, subset);
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    #endif
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
