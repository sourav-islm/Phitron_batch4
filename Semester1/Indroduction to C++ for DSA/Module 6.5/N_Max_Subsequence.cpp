#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int count = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        /*  if (s[i] != s[i + 1])
             count++; */
        if (s[i] == s[i + 1])
            count++;
    }

    // cout << count + 1;
    cout << s.size() - count;
    return 0;
}