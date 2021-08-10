#include <iostream>
using namespace std;
int main()
{
    int n;
    bool flag = true;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int temp;
    for (int i = n - 1; i >= 0; i--)
    {
        temp = arr[i];
        // cout << "temp= " << temp  << endl;
        for (int j = i + 1; j < n; j++)
        {
            if (temp >= arr[j])
                flag = true;
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << arr[i] << " ";
        flag = true;
    }
    return 0;
}