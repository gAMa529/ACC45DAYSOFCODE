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
        if (x <= 30)
            cout << "NO" << endl;

        else
            cout << "YES" << endl;
        t--;
    } while (t != 0);
    return 0;
}
