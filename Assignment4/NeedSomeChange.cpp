#include <iostream>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t > 0)
    {
        cin >> n;
        int arr[n], temp;
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        for (int i = 0; i < n - 2; i++)
        {
            temp = arr[i];
            arr[i] = arr[i + 2];
            arr[i + 2] = temp;
        }

        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
        t--;
    }
}
