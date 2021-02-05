#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;

void search(vi& arr, vi& sub, int index)
{
    // base-case
    if (index == arr.size())
    {
        int sum = 0;
        cout << "( ";
        for (int i: sub)
        {
            cout << i << " ";
            sum += i;
        }
        cout << ")";
        
        if (sum == 3)
            cout << "--";
        
        cout << "\n";
    }
    else
    {
        // include current element
        sub.push_back(arr[index]);
        search(arr, sub, index+1);
        // exclude current element
        sub.pop_back();
        search(arr, sub, index+1);
    }
}

void solve()
{
    vi arr = {1, 2, 3};
    vi sub;
    int index = 0;
    
    search(arr, sub, index);
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
