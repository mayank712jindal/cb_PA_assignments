#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n, t;
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int sum = 0, max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            sum = 0;
            for (int j = i; j < n + i; j++)
            {
                if (j >= n)
                    sum += arr[j - n];
                else
                    sum += arr[j];

                if (sum > max)
                    max = sum;
                if (sum < 0)
                    sum = 0;
            }
        }
        cout << max << endl;
        t--;
    }

    return 0;
}