#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int c0 = 0, c1 = 0, c2 = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
        else
            c2++;
    }
    int temp = 0;
    for (int i = 0; i < n; i++)
    {
        if (c0 == 0)
        {
            c0 = c1;
            temp = 1;
            c1 = 0;
            if (c0 == 0)
            {
                c0 = c2;
                temp = 2;
                c2 = 0;
            }
        }

        arr[i] = temp;
        cout << arr[i] << endl;
        c0--;
    }
    return 0;
}