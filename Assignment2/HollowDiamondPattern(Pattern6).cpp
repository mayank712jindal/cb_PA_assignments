#include <iostream>
using namespace std;
int main()
{
    int n, j = -1, x = -1;
    cin >> n;
    int y = n / 2 - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (i > 0 && i <= n / 2)
            {
                if (j < n / 2 - x || j > n / 2 + x)
                    cout << "*"
                         << "\t";
                else
                    cout << " "
                         << "\t";
            }
            else if (i > n / 2 && i < n - 1)
            {

                if (j < n / 2 - y || j > n / 2 + y)
                    cout << "*"
                         << "\t";
                else
                    cout << " "
                         << "\t";
            }

            else
                cout << "*"
                     << "\t";
        }
        x++;
        if (x > (n / 2 - 1))
            y--;
        cout << endl;
    }
    return 0;
}