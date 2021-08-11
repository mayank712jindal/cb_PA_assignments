#include <iostream>
using namespace std;
int main()
{
    int n, temp, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (arr[i - 1 - count] == temp)
        {

            count++;
        }
        else
            arr[i - count] = temp;
    }
    cout << n - count << endl;
    for (int i = 0; i < n - count; i++)
        cout << arr[i] << " ";
    return 0;
}