#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        for (int j = i; j > 0; j--)
        {
            if (arr[j] < arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else if (arr[j] > arr[j - 1])
                break;
        }
    }

    if (arr[n - 1] * arr[n - 2] * arr[n - 3] >= arr[0] * arr[1] * arr[2])
    {
        if (arr[n - 1] * arr[n - 2] * arr[n - 3] >= arr[0] * arr[1] * arr[n - 1])
            cout << arr[n - 1] << " " << arr[n - 2] << " " << arr[n - 3];

        else
            cout << arr[n - 1] << " " << arr[1] << " " << arr[0];
    }
    else if (arr[0] * arr[1] * arr[n - 1] < arr[0] * arr[1] * arr[2])
        cout << arr[2] << " " << arr[1] << " " << arr[0];
    else
        cout << arr[n - 1] << " " << arr[1] << " " << arr[0];
}
