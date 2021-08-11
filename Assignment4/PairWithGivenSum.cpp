#include <iostream>
using namespace std;
int main()
{
    int n, temp;
    long long int sum;
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
    cin >> sum;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i - 1])
            continue;
        temp = arr[i];
        if (temp > sum / 2)
            break;
        for (int j = i + 1; j < n; j++)
        {
            if (temp + arr[j] == sum)
            {
                cout << temp << " " << arr[j] << endl;
            }

            if ((temp + arr[j]) > sum)
                break;
        }
    }
    return 0;
}
