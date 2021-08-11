#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[2 * n];

    for (int i = 0; i < 2 * n; i = i + 2)
    {
        cin >> arr[i];

        if (i == (2 * n - 2))
            i = -1;
    }

    for (int i = 0; i < 2 * n; i++)
        cout << arr[i] << " ";
}
