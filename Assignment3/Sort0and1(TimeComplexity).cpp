#include <iostream>
using namespace std;
int main()
{
    int n, j = 0, temp, k = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp == 0)
        {
            arr[k] = temp;
            k++;
        }
        else
        {
            arr[n - 1 - j] = temp;
            j++;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}