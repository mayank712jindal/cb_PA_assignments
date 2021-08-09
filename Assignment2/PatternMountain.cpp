#include <iostream>
using namespace std;
int main()
{
    int n, j;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (j <= i)
                cout << j << "\t";
            else
                cout << " \t";
        }

        for (j = n - 1; j >= 1; j--)
        {
            if (j > i)
                cout << " \t";
            else
                cout << j << "\t";
        }

        cout << endl;
    }
    return 0;
}