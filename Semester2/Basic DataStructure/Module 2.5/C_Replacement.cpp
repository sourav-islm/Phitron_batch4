#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            v[i] = 0;
        else if (v[i] > 0)
            v[i] = 1;
        else
            v[i] = 2;
    }

    for (int x : v)
        cout << x << " ";
    return 0;
}