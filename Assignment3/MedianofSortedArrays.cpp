#include <iostream>
using namespace std;
int main()
{
    int n, min, temp;
    cin >> n;
    int arr[n + n];

    for (int i = 0; i < n + n; i++)
        cin >> arr[i];

    n = n + n;

    for (int i = 0; i < n - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    cout << (arr[n / 2] + arr[n / 2 - 1]) / 2;

    return 0;
}