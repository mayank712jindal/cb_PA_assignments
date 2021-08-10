#include <iostream>
using namespace std;
int main()
{
    int n;
    bool flag;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++)
        cin >> arr1[i];

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr2[arr1[i]] == i)
            flag = true;
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "true";
    else
        cout << "false";
    return 0;
}