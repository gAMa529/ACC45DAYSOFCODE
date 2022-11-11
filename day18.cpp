// codechef problem code ADVANCE

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
        if (y >= x && y <= (x + 200))
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
        t--;
    } while (t != 0);
    return 0;
}
