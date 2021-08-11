#include <iostream>
using namespace std;
int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n], count = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] % k == 0)
            count += (arr[i] / k);
        else
            count += (arr[i] / k + 1);
    }
    cout << count;
}
