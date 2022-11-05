// codechef problem code PRIZEPOOL
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
        cout << 10 * x + 90 * y << endl;
        t--;
    } while (t != 0);
    return 0;
}
