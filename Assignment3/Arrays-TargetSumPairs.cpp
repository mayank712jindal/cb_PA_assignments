#include <iostream>
using namespace std;
int main()
{
    int n, t, temp;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> t;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
            continue;

        sum = arr[i];

        if (sum > t)
            break;

        for (int j = i + 1; j < n; j++)
        {
            // if(arr[j]==arr[j-1])
            // continue;
            if ((sum + arr[j]) == t)
                cout << arr[i] << " and " << arr[j] << endl;

            if ((sum + arr[j]) > t)
                break;
        }
    }

    return 0;
}