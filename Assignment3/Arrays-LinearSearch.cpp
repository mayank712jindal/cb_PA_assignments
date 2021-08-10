#include <iostream>
using namespace std;
int main()
{
    int n, m, flag = -1;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> m;
    for (int i = 0; i < n; i++)
        if (m == arr[i])
        {
            flag = i;
            break;
        }

    cout << flag;
    return 0;
}