#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr1[n + 1];
    for (int i = 1; i <= n; i++)
        cin >> arr1[i];
    arr1[0] = 0;
    int m;
    cin >> m;
    int arr2[m + 1];
    for (int i = 1; i <= m; i++)
        cin >> arr2[i];

    arr2[0] = 0;
    if (m >= n)
    {
        int carry = 0, n1 = n;
        for (int i = m; i >= 0; i--)
        {
            if (n1 < 0)
                break;

            arr2[i] += (arr1[n1] + carry);
            carry = arr2[i] / 10;
            arr2[i] %= 10;
            n1--;
        }

        for (int i = 0; i <= m; i++)
        {
            if (arr2[i] == 0 && i == 0)
                continue;
            else
            {
                cout << arr2[i] << ", ";
            }
        }
        cout << "END";
    }
    else
    {
        int carry = 0, n1 = m;
        for (int i = n; i >= 0; i--)
        {
            if (n1 < 0)
                break;

            arr1[i] += (arr2[n1] + carry);
            carry = arr1[i] / 10;
            arr1[i] %= 10;
            n1--;
        }
        for (int i = 0; i <= n; i++)
        {
            if (arr1[i] == 0 && i == 0)
                continue;
            else
            {
                cout << arr1[i] << ", ";
            }
        }
        cout << "END";
    }
    return 0;
}