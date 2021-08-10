#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int max = INT_MIN;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];

        if (max < arr[i])
            max = arr[i];
    }

    cout << max;
    return 0;
}