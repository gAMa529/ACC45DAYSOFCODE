// codechef problem code XJUMP
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    do
    {
        int x, y;
        cin >> x >> y;
        cout << (x / y + (x % y)) << endl;
        t--;
    } while (t != 0);
    return 0;
}
