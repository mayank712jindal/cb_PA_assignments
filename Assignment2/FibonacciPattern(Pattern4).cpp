#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int check = 0, a = 0, b = 1, c;

    int arr[n * (n + 1) / 2];
    arr[0] = 0;
    arr[1] = 1;
    for (int i = 2; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    int k = 1, j = 1;
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (k > j)
        {
            cout << endl;
            j++;
            k = 1;
            i--;
        }
        else
        {
            cout << arr[i] << "\t";
            k++;
        }
    }

    return 0;
}