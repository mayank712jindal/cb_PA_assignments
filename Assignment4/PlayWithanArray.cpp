#include <iostream>
using namespace std;
int main()
{
    int n, temp, t;
    cin >> t;
    while (t > 0)
    {
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
        bool flag = true;
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] < arr[n / 2 + i])
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "1" << endl;
        else
            cout << "0" << endl;

        t--;
    }
    return 0;
}
