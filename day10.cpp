// codechef problem code ON_OFF
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    do
    {
        string s, r;
        int count = 0, n;
        cin >> n >> s >> r;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != r[i])
                count++;
        }
        if (count % 2 == 0)
            cout << 1 << endl;
        else
            cout << 0 << endl;
        t--;
    } while (t != 0);
    return 0;
}
