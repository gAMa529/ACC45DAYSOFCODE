// codechef problem code DIFFCONSEC
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    do
    {
        int n, count = 0;
        cin >> n;
        string num;
        cin>>num;
        for (int i = 0; i < num.length()-1; i++)
        {   
            if(num[i]==num[i+1])
            count++;
        }   
        cout << count << endl;
        t--;
    } while (t != 0);
}