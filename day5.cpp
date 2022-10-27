// codechef problem code MAXDIFFMIN
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
        cout << c - a << endl;
        t--;
    } while (t != 0);
    return 0;
}
