#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 || j == i)
            {
                if (i == 1 || i == 2)
                    cout << 1;
                else
                    cout << i - 1;
            }
            else
                cout << "0";
        }
        cout << endl;
    }
    return 0;
}