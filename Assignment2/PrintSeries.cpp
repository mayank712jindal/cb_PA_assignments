#include <iostream>
using namespace std;
int main()
{

    int n1, n2, n = 1;
    cin >> n1;
    cin >> n2;

    while (n1 > 0)
    {
        if ((3 * n + 2) % n2 == 0)
        {
            n++;
            continue;
        }
        else
        {
            cout << (3 * n + 2) << endl;
            n++;
            n1--;
        }
    }
    return 0;
}