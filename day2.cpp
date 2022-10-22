// codechef problem code LUCKYFR
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    do
    {
        int T, count = 0;
        cin >> T;
        while (T != 0)
        {
            if (T % 10 == 4)
                count++;

            T = T / 10;
        }
        cout << count << endl;
        t--;
    } while (t != 0);
}
