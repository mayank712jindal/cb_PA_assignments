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
            if (arr[j] > arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
            else if (arr[j] < arr[j - 1])
                break;
        }
    }
    for (int i = 0; i < n; i = i + 2)
    {
        cout << arr[i];

        if ((i >= (n - 2)) && i % 2 == 0)
        {
            cout << " ";
            i = -1;
        }
    }
    return 0;
}
