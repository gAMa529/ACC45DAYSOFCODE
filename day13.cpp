// codechef problem code TALLER
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
        if (x > y)
            cout << "A" << endl;

        else
            cout << "B" << endl;
        t--;
    } while (t != 0);
    return 0;
}
