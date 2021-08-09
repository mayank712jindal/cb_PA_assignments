#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // upper section
        if (i == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == 0 || j >= n / 2)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
        else if (i < n / 2)
        {
            for (int j = 0; j <= n / 2; j++)
            {
                if (j == 0 || j == n / 2)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }

        // middle line
        if (i == n / 2)
        {
            for (int j = 0; j < n; j++)
                cout << "*";
            cout << endl;
        }

        // lower section
        if (i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == n - 1 || j <= n / 2)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
        else if (i > n / 2)
        {
            for (int j = 0; j < n; j++)
            {
                if (j == n / 2 || j == n - 1)
                    cout << "*";
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
    return 0;
}