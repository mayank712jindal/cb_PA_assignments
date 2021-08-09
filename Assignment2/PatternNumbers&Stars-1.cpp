#include <iostream>
using namespace std;
int main()
{
    int n, s = 1;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
        }
        if (i > 1)
        {
            for (int k = 1; k <= s; k++)
                cout << "*"
                     << " ";
            s += 2;
        }
        cout << endl;
    }
    return 0;
}