// codechef problem code ODDSUMPAIR
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    do
    {
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b) % 2 == 1 || (b + c) % 2 == 1 || (a + c) % 2 == 1)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
        t--;
    } while (t != 0);
    return 0;
}
