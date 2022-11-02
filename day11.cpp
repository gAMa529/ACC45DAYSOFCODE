// codechef problem code TASTEDEC
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
        if (x * 2 == y * 5)
            cout << "Either" << endl;

        else
        {
            if (x * 2 > y * 5)
                cout << "Chocolate" << endl;

            else
                cout << "Candy" << endl;
        }
        t--;
    } while (t != 0);
    return 0;
}
