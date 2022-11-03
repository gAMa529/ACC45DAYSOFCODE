// codechef problem code TAXES
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    do
    {
        int x;
        cin >> x;
        if (x > 100)
            cout << x - 10 << endl;

        else
            cout << x << endl;
        t--;
    } while (t != 0);
    return 0;
}
