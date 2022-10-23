// codechef problem code BLITZ3_2
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    do
    {
        int n, a, b;
        cin >> n >> a >> b;
        cout << (2 * (180 + n) - (a + b)) << endl;
        t--;
    } while (t != 0);
    return 0;
}
